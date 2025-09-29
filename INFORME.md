# INFORME — Tarea 1: Implementación de llamada de sistema en xv6

## Datos
- Integrantes: _Cristóbal Salgado_ / _Diego Gajardo_
- Usuario GitHub: _Ribletx_ / _Wajax8_
- Rama usada: `grupo_I_t1`

## 1. Pasos seguidos para implementar "getppid":

1. Buscamos `syscall.h` para ver las funciones y agregamos una nueva (`#define SYS_getppid 22`)
2. Añadimos `extern uint64 sys_getppid(void)` en `syscall.c` (donde estan los extern) para declarar la función
3. En el mismo `syscall.c` añadimos `[SYS_getppid] sys_getppid`
4. Dentro de `sysproc.c` añadimos la logica de la función creada 
5. Añadimos un `entry` dentro de `usys.pl`
6. Declaramos la función en `user.h`

## 2. Creación del programa de prueba "yosoytupadre.c":

1. Creamos dentro de la carpeta `user` un nuevo archivo llamado `yosoytupadre.c`
2. Editamos el `Makefile` para añadir `yosoytupadre` en `UPROGS=`

```bash
## Para ejecutar todo hacemos:
make clean  -> para limpiar archivos previamente compilados
make -> Lee el Makefil para compilar
make qemu -> usa QEMU para emular y ejecutar el xv6 compilado
```

## 3. Pasos seguidos para implementar "getancestor":

1. Agregamos el nuevo número de `syscall.h` (`#define SYS_getancestor 23`)
2. Agregamos `extern uint64 sys_getancestor(void)` en `syscall.c` para poder identificarla
3. Agregamos la funcion en `syscall.c` (`[SYS_getancestor] sys_getancestor`)
4. Agregamos la logica al kernel (`sysproc.c`)
5. La hacemos accesible para los usuarios con `entry("getancestor")` en `usys.pl`
6. Declaramos la funcion en `user.h`

## Para no modificar yosoytupadre, creamos una nueva función con ambas logicas llamada imtupadre (repitiendo pasos anteriores)

## Problemas encontrados y soluciones
- Dificultades para crear la funcion yosoytupadre: resulto ser un problema con la direccion y se resolvio agregando kernel/ (basandome en zombie.c)
_FOTO_

- Error al intentar compilar la funcion getancestor: resulto ser un problema de versiones, ya que al intentar utilizar ChatGPT crea la logica basandose en una version de xv6 del MIT que tiene una version diferente a la implementada
_FOTO_

- Una dificultad adicional fue entender la tarea y donde encontrar los diferentes archivos y logicas que habia que modificar, pero gracias a los prompts correctos ChatGPT se volvio una herramienta muy util para poder realizar y entender la tarea
## 4. Confirmación de funcionamiento
- Confirmación de funcionamiento de funcion getppid en yosoytupadre:
_FOTO_

- Confirmación del funcionamiento de funcion getancestor:
_FOTO_

