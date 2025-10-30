#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define N 10

int
main(int argc, char *argv[])
{
  int i;
  for(i=0;i<N;i++){
    if(fork() == 0){
      int t = 50 * (i + 1);
      settickets(t);
      volatile unsigned long x = 0;
      for(;;){
        for(unsigned long j=0;j<1000000UL;j++) x += j;
        if(x % 10000000UL == 0) {
          printf("pid %d doing work, tickets=%d\n", getpid(), t);
        }
      }
      exit(0);
    }
  }

  for(i=0;i<N;i++){
    wait(0);
  }
  exit(0);
}
