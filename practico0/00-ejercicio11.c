#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que calcule el factorial de un número de dos formas 1) iterativa, y 2) recursiva.
*/

// Si el resultado va a ser mayor que el límite permitido por int, cambiar a unsigned int o unsigned int long

int factorial(int numero)
{
    if (numero >= 1)
    {
        return numero * factorial(numero - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int numero1;
    int marcador;
    int resultado;
    printf("Ingrese el número para calcular el factorial: ");
    scanf("%d", &numero1);
    resultado = numero1;
    marcador = numero1;
    // Forma iterativa
    do 
    {
        resultado = resultado * (marcador - 1);
        marcador = marcador - 1;
    } while (marcador > 1);
    printf("(Forma iterativa) El factorial de %d es %d\n", numero1, resultado);
    printf("(Forma recursiva) El factorial de %d es %d\n", numero1, factorial(numero1));
    return 0;
}