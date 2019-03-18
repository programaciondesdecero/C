#include <stdio.h>
#include <stdlib.h>

/*
Escribir una variante del ejercicio anterior utilizando una sentencia iterativa distinta
*/

int main()
{
	int numero1;
	int numero2;
	int marcador;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    if (numero1 < numero2)
    {
        marcador = numero1;
        do 
        {
            printf("%d ", marcador);
            marcador += 1;
        } while (marcador <= numero2);
        printf("\n");
    }
    else
    {
        printf("%d es menor que %d\n", numero2, numero1);
    }
    return 0;
}