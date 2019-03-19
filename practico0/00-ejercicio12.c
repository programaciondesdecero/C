#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que convierta de pesos a dólares. Debe recibir como argumentos la cantidad de pesos y la cotización diaria.
*/

int main()
{
    float pesos;
    float cotizacion;
    printf("Ingrese la cantidad de pesos a convertir y la cotización diaria, separados por un espacio: ");
    scanf("%f %f", &pesos, &cotizacion);
    printf("$%.2f equivalen a USD %.2f", pesos, pesos / cotizacion);
    printf("\n");
    return 0;
}