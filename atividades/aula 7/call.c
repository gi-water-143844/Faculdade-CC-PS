#include <stdio.h>

typedef struct {
	int x;
	int y;
} Par;


/* *p_i é o ponteiro */
void f(int *p_i, float f, char c, Par p, int v[3]) {
	(*p_i) = 0; //guarda 0 dentro do endereço de i, nosso 'a' no main
	f = 0;
	c = 0;
	p.x = p.y = 0;
	v[0] = v[1] = v[2] = 0;
}

int main() {
	int a = 1;
	float b = 2.3;
	char c = 'x';
	Par d = {8,9};
	int e[3] = {0,1,2};
	f(&a,b,c,d,e);		//&a = endereço da variavel 'a'
	printf("%i %f %c %i %i\n", a,b,c,d.x,d.y);
	printf("%i %i %i\n",e[0],e[1],e[2]);
	printf("endereço de 'a': %p\n",&a);

	char *lista[] = {"Ana","Beto","Cadu"};
	char *nome = lista[0];
	printf("%s\n",nome);
}

/*
int a = 5;		'a' recebe o valor inteiro 5
int *p_a = &a;		*p_a recebe o endereço de 'a'
(*p_a) = 0;		o valor 0 (zero) é colocado no endereço de 'a'
			logo, 'a' que valia 5, agora vale 0.

*/
