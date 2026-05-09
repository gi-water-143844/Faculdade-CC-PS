#include <stdio.h>
#include "par.h"

int main() {
	Par p1 = {1,2};
	Par p2 = {4,7};
	Par r;
	r = soma_par(p1,p2);
	mostra_par(r);

	return 0;
}
