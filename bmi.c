#include <stdio.h>

int main(void) {

	float  peso, altura, masa;
	
	printf("ingrese su peso en kg: ");
	scanf("%f", &peso);
	printf("ingrese su altura: ");
	scanf("%f", &altura);
	masa = peso / (altura * altura);
	printf("Su indice de masa corporal es: %f ", masa);
	
	printf("\nindice \t\t |\t condicion\n <18.5 \t\t | \t Bajo peso \n 18.5 a 24.9 \t | \t Normal \n 25.0 a 29.9 \t | \t Sobrepeso \n >=30 \t\t | \t Obesidad");
	
	
	return 0;
}

