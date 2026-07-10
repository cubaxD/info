#include <stdio.h>

int main(void) {
	float peso, altura, masa;
	
	// Repositorio: https://github.com/tu-usuario/tu-repo   <-- reemplazá con el link real
	
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	while (peso <= 0) {
		printf("Error: el peso no puede ser negativo ni cero.\n");
		printf("Ingrese su peso en kg: ");
		scanf("%f", &peso);
	}
	
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	while (altura <= 0) {
		printf("Error: la altura no puede ser negativa ni cero.\n");
		printf("Ingrese su altura en metros: ");
		scanf("%f", &altura);
	}
	
	masa = peso / (altura * altura);
	printf("Su indice de masa corporal es: %.2f\n", masa);
	
	if (masa < 18.5) {
		printf("Esta bajo de peso");
	} else if (masa >= 18.5 && masa <= 24.9) {
		printf("Su peso es normal");
	} else if (masa >= 25 && masa <= 29.9) {
		printf("Tiene sobrepeso");
	} else if (masa >= 30) {
		printf("Esta obeso");
	}
	
	printf("\nindice \t\t |\t condicion\n <18.5 \t\t | \t Bajo peso \n 18.5 a 24.9 \t | \t Normal \n 25.0 a 29.9 \t | \t Sobrepeso \n >=30 \t\t | \t Obesidad");
	
	return 0;
}
