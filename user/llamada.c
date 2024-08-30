#include "kernel/types.h"
#include "user.h"

int main(void)
{
    int ppid = getppid();
    int pid = getpid();
    printf("Id de este proceso: %d\n", pid);
    printf("Id del proceso padre: %d\n", ppid);
    exit(0);
}