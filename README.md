# INFORME — Tarea 2: Planificación de procesos en xv6

## Datos:
- **Integrantes:** Cristóbal Salgado / Diego Gajardo
- **Usuario GitHub:** Ribletx / Wajax8
- **Rama usada:** `grupoI_t2`

## 1. Pasos seguidos:

1. En el archivo `proc.h` se añadió la variable `tickets`
2. En el archivo `proc.h` se añadió la variable `run_slices`
3. En el archivo `proc.c` se añadió en la función `allocproc` los valores iniciales para ambas variables: 100 para tickets y 0 para run_slices
4. En el archivo `user.h` declaramos la función `settickets`
5. En el archivo `usys.pl` añadimos `entry("settickets")` para declarar la llamada al sistema
6. En el archivo `syscall.h` se definió la entrada al próximo ticket libre (22)
7. En el archivo `sysproc.c` se implementó `sys_settickets(void)` el cual llama al kernel para asignar un ticket al proceso actual
8. En el archivo `proc.c` se implementa `settickets(int n)`
9. En el archivo `syscall.c` se añadió la función de llamada al sistema
10. En el archivo `proc.c` se añadió `krand` el cual es un generador aleatorio en el kernel
11. En el archivo `proc.c` se modificó `scheduler(void)` para cambiar de Round Robin a Lottery Scheduling
12. Creación de programa de prueba `Demo.c`

## 2. Prompt de ChatGPT (IA usada como asesoramiento):
https://chatgpt.com/share/69029d23-2ae8-8004-b0e5-d79490f836fa

## 3. Problemas encontrados y soluciones:

- **Problema de versión:** ChatGPT considera una versión diferente de xv6 a la hora de procesar la ayuda. En el paso 5, las entradas estaban declaradas de forma diferente por la diferencia de versión, pero luego de un poco de investigación y explorar los archivos de xv6 se logró resolver el desajuste de versión.

- **Error con krand:** Al implementar el generador aleatorio `krand` y dejarlo en la parte inferior del archivo, no era reconocido. Para solucionarlo bastó con moverlo justo sobre la función `scheduler`.

- **Error en Makefile:** Tras definir la función de prueba `Demo.c`, no se definió correctamente en el `Makefile`, por lo que al intentar ejecutarla daba error. Se solucionó agregando la entrada correspondiente en el Makefile.

## 4. Confirmación de funcionamiento:

a
