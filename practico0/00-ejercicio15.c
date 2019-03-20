#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa C que implemente el algoritmo de Euclides para encontrar el mayor común divisor de dos números ingresados por el usuario.
*/

int calculo(int aux, int resto)
{
	int dividendo;
	int divisor;
	do
	{
		dividendo = aux;
		divisor = resto;
		resto = dividendo % divisor;
		aux = divisor;
	} while (resto != 0);
	return aux;
}

int main()
{
    int numero1;
    int numero2;
    int aux;
    int resto;
    printf("Ingrese dos números enteros separados por un espacio: ");
    scanf("%d %d", &numero1, &numero2);
    if (numero1 == 0 || numero2 == 0) // Uno de los números es igual cero
    {
        if (numero1 == 0)
        {
            printf("El mcd de %d y %d es %d", numero2, numero1, numero2);
        }
        else // numero2 == 0
        {
            printf("El mcd de %d y %d es %d", numero1, numero2, numero1);
        }
    }
    else
    {
        if (numero1 > numero2)
        {
            resto = numero1 % numero2;
            if (resto == 0)
			{
				printf("El mcd de %d y %d es %d", numero1, numero2, numero2);
			}
			else
			{
			    aux = numero2;
				printf("El mcd de %d y %d es %d", numero1, numero2, calculo(aux, resto));
			}
        }
        else // numero1 < numero2
        {
            resto = numero2 % numero1;
			if (resto == 0)
			{
				printf("El mcd de %d y %d es %d", numero2, numero1, numero1);
			}
			else
			{
			    aux = numero1;			
				printf("El mcd de %d y %d es %d", numero1, numero2, calculo(aux, resto));
			}
        }
    }
    printf("\n");
    return 0;
}