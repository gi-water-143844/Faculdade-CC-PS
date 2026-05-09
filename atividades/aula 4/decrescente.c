#include <stdio.h>

int main() {
	int v[5] = {1,2,3,4,5};

	for(int i=4; i>=0; i--) {
		printf("%i\n", v[i]);
	}
	return 0;
}
