#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que permita inicializar un arreglo con 10 números y muestre el menor y el mayor por pantalla.
*/

int main()
{
    int i;
    int j;
    int k;
    int m;
    int temp;
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
        for (k = 0; k < 10 - j - 1; k++)
        {
            if (numeros[k] > numeros[k + 1])
            {
                temp = numeros[k];
                numeros[k] = numeros[k + 1];
                numeros[k + 1] = temp;
            }            
        }
    }

    printf("El menor elemento del arreglo es %d y el mayor es %d\n", numeros[0], numeros[9]);
    return 0;
}