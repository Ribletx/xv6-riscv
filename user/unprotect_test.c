#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    printf("=== Test: unrdprotect restaura lectura ===\n");

    char *addr = sbrk(4096);
    if (addr == (char*)-1) {
        printf("FAIL: no se pudo asignar memoria\n");
        exit(1);
    }

    addr[0] = 99; // escribir OK

    // aplicar protección
    if (mrdprotect(addr, 1) < 0) {
        printf("FAIL: mrdprotect fallo\n");
        exit(1);
    }

    // quitar protección
    if (munrdprotect(addr, 1) < 0) {
        printf("FAIL: munrdprotect fallo\n");
        exit(1);
    }

    printf("Leyendo despues de munrdprotect...\n");

    char x = addr[0]; // debe funcionar ahora

    printf("OK: lectura funciona (%d)\n", x);

    exit(0);
}
