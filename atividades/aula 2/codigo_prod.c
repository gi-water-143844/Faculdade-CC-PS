#include <stdio.h>

int main() {
	int p = 0;
	int q = 0;
	float total = 0.0;
	
	printf("Informe o código do produto: ");
	scanf("%i",&p);
	printf("Informe a quantidade: ");
	scanf("%i",&q);

	if (p==1){
		total = q*1.1;
	} 
	else if (p==2){
		total = q*2.3;
	} else {
		total = q*4.7;
	}
	printf("Total: R$%.2f\n",total);
	return 0;
}
