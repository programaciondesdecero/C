#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que, dados dos números por el usuario, imprima por pantalla todos los números entre ellos.
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
        for (marcador = numero1; marcador <= numero2; marcador++)
        {
            printf("%d ", marcador);
        }
        printf("\n");
    }
    else
    {
        printf("%d es menor que %d\n", numero2, numero1);
    }
    return 0;
}