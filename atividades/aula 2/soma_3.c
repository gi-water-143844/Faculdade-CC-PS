#include <stdio.h>

int main() {
	int soma = 0;
	int c = 0;

	while(c<=100){
		soma = soma + c;
		c = c + 3;
	}
	printf("soma: %i\n",soma);
	return 0;
}
