#include <stdio.h>

void quadrado(int n) {
	for (int l=1; l<=n; l++) {
		for(int c=1; c<=n; c++) {
			printf(" #");
		}
		printf("\n");
	}
}

int main() {
	int x = 0;
	printf("Informe um valor: ");
	scanf("%i",&x);
	quadrado(x);
	return 0;
}

