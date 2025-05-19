#include <stdio.h>
#include <stdlib.h>

// Funci�n que interpreta el IMC
const char* interpretar_imc(float imc) {
	if (imc < 18.5) {
		return "Bajo peso";
	} else if (imc >= 18.5 && imc <= 24.9) {
		return "Peso normal";
	} else if (imc >= 25 && imc <= 29.9) {
		return "Sobrepeso";
	} else {
		return "Obesidad";
	}
}

// Funci�n que calcula el IMC y retorna el valor e interpretaci�n
void calcular_imc(float peso, float altura, float* imc, const char** interpretacion) {
	*imc = peso / (altura * altura);
	*interpretacion = interpretar_imc(*imc);
}

int main() {
	float peso, altura, imc;
	const char* interpretacion;
	
	while (1) {
		printf("Ingrese su peso en kg: ");
		if (scanf("%f", &peso) != 1) {
			printf("Ingrese un valor num�rico v�lido.\n");
			while (getchar() != '\n'); // limpiar el buffer de entrada
			continue;
		}
		
		printf("Ingrese su altura en metros: ");
		if (scanf("%f", &altura) != 1) {
			printf("Ingrese un valor num�rico v�lido.\n");
			while (getchar() != '\n'); // limpiar el buffer de entrada
			continue;
		}
		
		break;
	}
	
	calcular_imc(peso, altura, &imc, &interpretacion);
	
	printf("Su IMC es: %.2f\n", imc);
	printf("Su interpretaci�n es: %s\n", interpretacion);
	
	return 0;
}
