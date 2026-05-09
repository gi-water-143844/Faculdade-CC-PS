#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	printf("digite um valor 'a': ");
	scanf("%i", &a);
	printf("digite um valor 'b': ");
	scanf("%i", &b);
	
	if (a < b) {
		printf ("ordem crescente: %i, %i\n", a, b);
	} else {
		printf("ordem crescente: %i, %i\n", b, a);
	}
	return 0;
}
