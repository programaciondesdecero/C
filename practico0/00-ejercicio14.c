#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que tome un número entero e imprima todos los números impares menores que él.
*/

void impar(int numero, int marcador)
{
    if (numero > 1)
    {
        numero = numero - marcador;
        printf("%d ", numero);
        impar(numero, 2);
    }
}

int main()
{
    int numero;
    printf("Ingrese un número entero mayor que 1: ");
    scanf("%d", &numero);
    if (numero % 2 == 0 && numero >= 2)
    {
        impar(numero, 1);
    }
    else
    {
        impar(numero, 2);
    }
    printf("\n");
    return 0;
}
