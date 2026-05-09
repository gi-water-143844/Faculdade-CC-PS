#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	printf("Informe o 1º ângulo: ");
	scanf("%i",&a);
	printf("Informe o 2º ângulo: ");
	scanf("%i",&b);

	int soma = a+b;
	
	if(soma>=360){
		int soma_novo = soma % 360;
		printf("Soma dos ângulos: %i°\n",soma_novo);
	} else {
		printf("Soma dos ângulos: %i°\n",soma);
	}
	return 0;
}
