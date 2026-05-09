#include <stdio.h>

void troca (int *p_x,int *p_y) {
	int aux = (*p_y);
	(*p_y) = (*p_x);
	(*p_x) = aux;
}

int main () {
	int x = 1;
	int y = 2;
	troca(&x,&y);
	printf("x=%i y=%i\n",x,y);
}
