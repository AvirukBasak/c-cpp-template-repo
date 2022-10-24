#include <stdio.h>
#include <stdlib.h>

#include "echo.h"

void echo(int argc, char *argv[])
{
    if (argc < 2) abort();
    int i = 1;
    for (; i < argc; i++)
        printf("%s ", argv[i]);
    printf("\n");
}
