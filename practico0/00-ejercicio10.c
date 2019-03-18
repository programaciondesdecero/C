#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escribir un programa C que imprima por pantalla los cuadrados de los primeros 30 números naturales.
*/

int main()
{
    int marcador;
    for (marcador = 1; marcador <= 30; marcador++)
    {
        printf("%d ", marcador * marcador);
    }
    printf("\n");
    return 0;
}