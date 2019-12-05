#include "kernel/types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int *ptr = 0;
    int a = *ptr;

    printf("%d", a);

    // printf("%d", *ptr);
    // need to parse printf func

    exit(0);
}