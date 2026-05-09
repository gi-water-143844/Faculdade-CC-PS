#include <stdio.h>
#include "par.h"

Par soma_par(Par x, Par y) {
	Par w = {x.a + y.a, x.b + y.b};
	return w;
}

void mostra_par(Par z) {
	printf("[%i, %i]\n",z.a, z.b);
}
