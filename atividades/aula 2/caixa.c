#include <stdio.h>

int main() {
	int prods = 333;

	int total_caixas = prods/12;
	int sobra = prods - (total_caixas*12);

	printf("total de caixas inteiras: %i\nsobra de produtos: %i\n",total_caixas,sobra);
	return 0;
}
