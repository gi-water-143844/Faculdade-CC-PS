#include <stdio.h>

int main() {
	int idade = 0;
	printf("informe idade: ");
	scanf("%i", &idade);
	if (idade < 18){
		printf("você é menor de idade\n");
	} else {
		printf("você é de maior\n");
	}
	return 0;
}
