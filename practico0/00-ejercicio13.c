#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que calcule el área de un rectángulo. El usuario proporcionará su base y altura en forma de números enteros.
*/

int main()
{
    int base;
    int altura;
    printf("Ingrese la base del rectángulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%d", &altura);
    printf("Área del rectángulo: %d unidades de superficie\n", base * altura);
    return 0;
}
