#include <stdio.h>

int main() {
	int c = 0;
	int a = 0;
	
	while(c<=100){
		a = a + c;
		c++;
	}
	printf("soma: %i\n",a);
	return 0;
}
