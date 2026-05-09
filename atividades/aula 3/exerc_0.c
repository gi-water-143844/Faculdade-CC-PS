#include <stdio.h>

float media(int a, int b) {
	return (a+b)/2;
}

int impares(int n) {
	int c = 1;
	int impar = 1;
	while (c<=n) {
		if (c<n){
			printf("%i, ",impar);
			impar = impar+2;
		} else {
			printf("%i.\n",impar);
		}
		c++;
	}
	return 0;
}

void matriz(int l, int c) {
	for (int i=1; i<=l; i++) {
		for (int j=1; j<=c; j++) {
			printf(" %i %i ",i,j);
		}
		printf("\n");
	}
}

void triangulo(int n) {
	int c = 1;
	for (int i=1; i<=n; i++) {
		while(c<=i) {
			printf("%i ",c);
			c++;
		}
		printf("\n");
		c = 1;
	}
}

int main() {
	printf("Média entre 27 e 13: %.2f\n",media(27,13));
	printf("\n10 primeiros números impares:\n");
	impares(10);
	printf("\nMatriz 3x5:\n");
	matriz(3,5);
	printf("\nTriangulo 5:\n");
	triangulo(5);
	return 0;
}
