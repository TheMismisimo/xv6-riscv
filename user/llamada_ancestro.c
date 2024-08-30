#include "kernel/types.h"
#include "user.h"

int main(int argc, char *argv [])
{
    if (argc != 2) {
        printf("Se necesita un argumento\n");
        exit(1);
    }

    int n = atoi(argv[1]);
    int ancestor_pid = getancestor(n);

    if (ancestor_pid == -1) {
        printf("El ancestro no fue encontrado\n");
    } else {
        printf("El id del proceso del ancestro numero %d es: %d\n", n, ancestor_pid);
    }
    exit(0);

}