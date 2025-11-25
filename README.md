# INFORME — Tarea 3: Protección de lectura en XV6.

## Datos:
- **Integrantes:** Cristóbal Salgado / Diego Gajardo
- **Usuario GitHub:** Ribletx / Wajax8
- **Rama usada:** `Grupo_I_T3`

## 1. Desarrollo y pasos realizados:
1. Declaramos el numero de las Syscall en `kernel/syscall.h`
2. Registramos las nuevas Syscall en `kernel/syscall.c`, primero declarando la funcion y luego añadiendolas a la tabla `Syscalls[]`
3. En `kernel/sysproc.c` implementamos las metodologias que leen los argumentos y llaman a las funciones reales
4. Añandimos las llamadas de usuario de las funciones que definimos en `user/usys.pl`
5. Declaramos el espacio de usuario en `user/user.h`

Luego de definir las funciones, debemos ajustra el comportamiento de estas

5. Modificamos el PTE en el archivo `kernel/vm.c` para activar/desactivar los permisos de lectura en las paginas de usuario.
6. Manejamos traps y la deteccion de fallos en la lectura modificando `kernel/trap.c` para verificar PTE_R

Una vez que tenemos toda la logica implementada, ahora crearemos el programa de prueba

7. Creamos el arhivo `user/rdprotect_test.c`
8. Añadimos la función en `UPROGS=` que esta en el `Makefile`

Ahora añadimos el test de restauración:

9. Creamos el archivo `user/unprotect_test.c`
10. Añadimos la función en `UPROGS=` que esta en el `Makefile`

## 2. Compilacion y ejecución:
Compilacion del Kernel:
`make clean` -> Permite limpiar los archivos
`make qemu` -> Inicia el sistema operativo

Ejecución:
`$ rdprotect_test` -> Programa para probar protección
`$ unprotect_test` -> Programa para probar resturación

Cierre de xv6:
`Ctrl + A`
`X`

## 3. Prompt de ChatGPT (IA usada como asesoramiento):

https://chatgpt.com/share/6924f114-9144-8004-b8c7-5abc7475e5b9

## 4. Problemas encontrados y soluciones:
Gracias al uso de la IA fue más fácil sortear las dificultades, pero al mismo tiempo trae consigo nuevos desafíos:
- El versionamiento de xv6 para la IA es diferente con el que estamos trabajando, por lo que considera archivos que en realidad no existen.
Solución: ser mas especifico con los promps, tras entender de que estamos hablando se vuelve una herramienta util para resolver.

- El uso de la IA entiende la tarea de una forma distinta, fragmentándola en partes, si uno no comprende qué es lo que está haciendo, podría considerar la tarea finalizada cuando en realidad aún faltan pasos por realizar.
Solución: Utilizar la IA como una herramienta de apoyo y no como un sustituto para realizar la tarea, ya que al final del día quien toma la decisión final es uno y no la computadora.

- Una dificultad menor fue el nombre de los archivos, ya que se permite como máximo 14 caracteres y, al crear el segundo programa de prueba, se excedía este límite y se producía un error.
Solución: Cambiar el nombre reduciéndolo aún más. Puede ser un poco menos claro, pero cumple con el formato.

## 5. Confirmación de funcionamiento:
