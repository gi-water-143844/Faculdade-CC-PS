#include <stdio.h>

int main() {
	int a = 1;
	int v = 0;
	
	printf("Informe um valor inteiro(digite 0 para finalizar): ");
	scanf("%i",&v);

	while(v!=0) {
		a = a*v;
		printf("Informe um valor inteiro(digite 0 para finalizar): ");
		scanf("%i",&v);
	}
	printf("Produto: %i\n",a);
	return 0;
}
