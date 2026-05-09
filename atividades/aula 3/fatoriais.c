#include <stdio.h>

void fatoriais(int n) {
	int c = 1;
	int total = 1;

	for (int i=1; i<=n; i++) {
		printf("%i! = ",i);
		while(c<=i) {
			if (i==1) {
				printf("1 = 1");
			}
			 else {
				total=total*c;
				 if (c<i){
					printf("%i x ",c);
				} else {
					printf("%i = %i ",c,total);
				}
			}
			c++;
		}
		printf("\n");
		c = 1;
		total=1;
	}
}

int main() {
	printf("Fatorial de 5:\n");
	fatoriais(5);
	return 0;
}
