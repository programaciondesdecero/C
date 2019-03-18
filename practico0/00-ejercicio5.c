#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que imprima por pantalla el mayor y el menor de dos números dados por el usuario
*/

int main()
{
	int numero1;
	int numero2;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    if (numero1 < numero2)
    {
        printf("%d es menor que %d\n", numero1, numero2);
    }
    else if (numero1 > numero2)
    {
        printf("%d es mayor que %d\n", numero1, numero2);
    }
    else
    {
        printf("%d y %d son iguales\n", numero1, numero2);
    }
    return 0;
}