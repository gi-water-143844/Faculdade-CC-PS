#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	
	printf("Informe um valor inteiro: ");
	scanf("%i",&a);
	printf("Informe outro valor inteiro: ");
	scanf("%i",&b);

	if (a<=b) {
		while(a<=b) {
			printf("%i\n",a);
			a++;
		}
	} else {
		while(a>=b) {
			printf("%i\n",a);
			a--;
		}
	}
	return 0;
}
