#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que permita inicializar un arreglo con 10 números y los muestre ordenados de menor a mayor por pantalla.
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

    for (m = 0; m < 10; m++)
    {
        printf("%d ", numeros[m]);
    }
    printf("\n");
    return 0;
}