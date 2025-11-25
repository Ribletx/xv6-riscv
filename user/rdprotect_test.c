#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    char *addr = sbrk(0);     // Obtener fin actual del heap
    sbrk(4096);               // Reservar una página nueva

    addr[0] = 'Z';            // Escribir un valor inicial

    // Proteger contra lectura
    if (mrdprotect(addr, 1) < 0) {
        printf("mrdprotect falló\n");
        exit(1);
    }

    // Aún debería permitir escritura
    addr[0] = 'A';

    // Intento de lectura — DEBE causar page fault
    char c = addr[0];
    printf("Valor leído: %c (esto NO debería imprimirse)\n", c);

    // Restaurar permisos
    if (munrdprotect(addr, 1) < 0) {
        printf("munrdprotect falló\n");
        exit(1);
    }

    printf("Protección revertida correctamente.\n");
    exit(0);
}
