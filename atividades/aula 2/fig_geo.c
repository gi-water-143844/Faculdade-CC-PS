#include <stdio.h>

int main() {
	float comp = 0.0;
	float larg = 0.0;

	printf("Informe o comprimento da figura geométrica: ");
	scanf("%f",&comp);
	printf("Informe a largura: ");
	scanf("%f",&larg);	

	if (comp == larg) {
		printf("a figura geométrica é um quadrado\n");
	} else {
		printf("a figura geométrica é um retângulo\n");
	}
	return 0;
}
