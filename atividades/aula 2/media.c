#include <stdio.h>

int main() {
	int a = 14;
	int b = 3;
	int c = 18;
	int d = 22;

	int calc_i = (a+b+c+d)/4;
	float calc_f = (a+b+c+d)/4.0;

	printf("média aritmética inteira: %i\nmédia aritmética real: %.2f\n",calc_i,calc_f);
	return 0;
}
