# INFORME — Tarea 0: Instalación y Ejecución de xv6

## Datos
- Integrantes: _Cristóbal Salgado_ / _Diego Gajardo_
- Usuario GitHub: _Ribletx_ / _Wajax8_
- Rama usada: `grupo_tI`

## 1. Pasos seguidos para instalar xv6

1. Revisamos la version de las dependencias necesarias y descargamos las requeridas (`sudo apt install -y qemu-system-misc gdb-multiarch gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf`).
2. Hicimos el Fork del código para que quede en nuestra cuenta.
3. Clonamos el Fork de `xv6-riscv` en nuestra carpeta en visual studio code.
4. Creamos y lo movimos a la `rama grupo_tI`.
5. Compilamos y ejecutamos con `make qemu`.
6. Verificamos comandos dentro de xv6 (`ls`, `echo`, `cat`).

## 2. Problemas encontrados y soluciones
- El sistema operativo funciona en C: En Windows es complicado ejecutar este lenguaje, pero tenia instalado Ubuntu desde antes, por lo que no fue un problema mayor luego de darme cuenta, solo ejecute la coneccion en visual con WSL:Ubuntu
- Las instrucciones estaban poco claras y dificiles de seguir: Gracias a la ayuda de la inteligencia artificial (ChatGPT) pude detallar y ordenar mejores las instrucciones para facilitar el desarrollo de la actividad
- (Diego) En mi caso tuve un problema, debido a que me habia olvidado de mi contraseña de linux, por lo que tuve que investigar como poder entrar como usuario root y poder cambiar la contraseña.

## 3. Confirmación de funcionamiento
- Confirmación de funcionamiento (Cristóbal)
<img width="591" height="751" alt="cat_README_Cristobal" src="https://github.com/user-attachments/assets/f7b2efb1-151f-4087-bcae-fd3e69f6ebe7" />
<img width="183" height="60" alt="echo_Holaxv6_Cristobal" src="https://github.com/user-attachments/assets/a89d2d88-1099-43a3-be89-46fe562f11a5" />
<img width="325" height="470" alt="ls_Cristobal" src="https://github.com/user-attachments/assets/2d7eca66-073e-4c83-9148-7fa085c5821b" />
<img width="1477" height="280" alt="xv6_funcionando_Cristobal" src="https://github.com/user-attachments/assets/87c9de39-bbde-4372-8c6f-b6de8d3f3c22" />


- Confirmación de funcionamiento (Diego)
![Comandos y ejecucion (Diego)](https://github.com/user-attachments/assets/acf60e6e-bcc3-4d12-a9de-12a20e357164)
