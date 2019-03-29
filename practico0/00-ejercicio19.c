#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que permita inicializar un arreglo con 10 números y elimine los repetidos.
*/

int existe_numero(int numeros[], int elementos, int numero)
{
    int i;
    for (i = 0; i < elementos; i++)
    {
        if (numeros[i] == numero)
        {
            return -1; 
        }
    }
    return numero;
}

int main()
{
    int i;
    int j;
    int k;
    int numero;
    int numeros[10];
    int sinduplicados[10];
    int temp;

    j = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un número para agregar al arreglo: ");
        scanf("%d", &numero);
        
        temp = existe_numero(numeros, i + 1, numero);
        if (temp != -1)
        {
            sinduplicados[j] = numero;
            j += 1;
        }
        numeros[i] = numero;
    }

    for (k = 0; k < j; k++)
    {
        printf("%d ", sinduplicados[k]);
    }
    printf("\n");
    return 0;
}