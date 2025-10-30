#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define N 10

int
main(int argc, char *argv[])
{
  int i;
  printf("=== Iniciando prueba Lottery Scheduling ===\n");
  
  for(i=0; i<N; i++){
    if(fork() == 0){
      int t = 50 * (i + 1);
      settickets(t);
      printf("Proceso %d: PID=%d, tickets=%d iniciado\n", i, getpid(), t);
      
      volatile unsigned long x = 0;
      // Cambia el bucle infinito por uno con límite
      for(unsigned long iterations=0; iterations<100; iterations++){
        for(unsigned long j=0; j<1000000UL; j++) {
          x += j;
        }
      }
      
      printf("Proceso %d (PID=%d, tickets=%d) terminado\n", i, getpid(), t);
      exit(0);
    }
  }

  // Padre espera a todos los hijos
  for(i=0; i<N; i++){
    wait(0);
  }
  
  printf("=== Prueba completada ===\n");
  exit(0);
}