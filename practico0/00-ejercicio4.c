#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1;
	int numero2;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
	int suma = numero1 + numero2;
	int resta = numero1 - numero2;
	int multiplicacion = numero1 * numero2;
	float division = (float)numero1 / numero2;
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %.2f\n", division);
    return 0;
}
