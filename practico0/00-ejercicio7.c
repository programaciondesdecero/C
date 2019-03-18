#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que imprima por pantalla los números del 1 al 500
*/

int main()
{
    int i;
    for (i = 1; i <= 500; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}