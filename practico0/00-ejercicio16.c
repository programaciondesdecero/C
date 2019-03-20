#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que permita inicializar un arreglo con 10 números y los muestre por pantalla
*/

int main()
{
    int i;
    int j;
    int numero;
    int numeros[10];
    
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un número para agregar al arreglo: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    for (j = 0; j < 10; j++)
    {
        printf("%d ", numeros[j]);
    }
    printf("\n");
    return 0;
}