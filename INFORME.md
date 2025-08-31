# INFORME — Tarea 0: Instalación y Ejecución de xv6

## Datos
- Integrantes: _Cristóbal Salgado_ / _Diego Gajardo_
- Usuario GitHub: _Ribletx_ / _x_
- Rama usada: `grupo_tI`

# Desarrollo por parte Cristóbal
## 1. Pasos seguidos para instalar xv6

1. Revise la version de las dependencias necesarias y descargue las requeridas (`sudo apt install -y qemu-system-misc gdb-multiarch gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf`).
2. Hice el Fork del código para que quede en mi cuenta.
3. Cloné el Fork de `xv6-riscv` en mi carpeta en visual studio code.
4. Cree y me movi a la `rama grupo_tI`.
5. Compilé y ejecute con `make qemu`.
6. Verifiqué comandos dentro de xv6 (`ls`, `echo`, `cat`).

## 2. Problemas encontrados y soluciones
- El sistema operativo funciona en C: En Windows es complicado ejecutar este lenguaje, pero tenia instalado Ubuntu desde antes, por lo que no fue un problema mayor luego de darme cuenta, solo ejecute la coneccion en visual con WSL:Ubuntu
- Las instrucciones estaban poco claras y dificiles de seguir: Gracias a la ayuda de la inteligencia artificial (ChatGPT) pude detallar y ordenar mejores las instrucciones para facilitar el desarrollo de la actividad

## 3. Confirmación de funcionamiento
![Ejecución de xv6](xv6_funcionando_Cristobal.png)
![Comando ls](ls_Cristobal.png)
![Comando echo "Hola xv6"](echo_Holaxv6_Cristobal.png)
![Comando cat README](cat_README_Cristobal.png)

