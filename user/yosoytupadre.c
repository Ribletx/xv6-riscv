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
    exit(0);
  } else { // padre
    wait(0);
    printf("parent (pid=%d) waited for child %d\n", getpid(), pid);
  }
  exit(0);
}
