#include <stdio.h>

int main() {
	int i = 0;
	printf("Informe um valor inteiro: ");
	scanf("%i", &i);
	if (i >= 1 && i <= 10){
		printf("O valor digitado está no intervalo [1,10]\n");
	} else {
		printf("O valor digitado está fora do intervalo [1,10]\n");
	}
	return 0;
}

