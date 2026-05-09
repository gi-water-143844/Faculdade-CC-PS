#include <stdio.h>

int main() {
	float v = 0.0;
	
	printf("Informe um valor real (digite 0 para finalizar): ");
	scanf("%f",&v);
	float a = v;
	while(v!=0.0) {
		if(v<a) {
			a = v;
		}
		printf("Informe um valor real (digite 0 para finalizar): ");
		scanf("%f",&v);
	}
	printf("menor valor real: %.1f\n",a);
	return 0;
}
