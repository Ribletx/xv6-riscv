#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int pid = fork();
  if (pid < 0) {
    printf("fork failed\n");
    exit(1);
  }

  if (pid == 0) { // hijo
    printf("child: pid=%d, getppid()=%d\n", getpid(), getppid());
    printf("getancestor(0)=%d\n", getancestor(0));
    printf("getancestor(1)=%d\n", getancestor(1));
    printf("getancestor(2)=%d\n", getancestor(2));
    exit(0);
  } else { // padre
    wait(0);
    printf("parent (pid=%d) waited for child %d\n", getpid(), pid);
  }
  exit(0);
}
