#include <stdio.h>

int main() {
	int v[6] = {5,4,6,3,2,1};

	for(int i=0; i<6; i++) {
		if(v[i]%2==0) {
			v[i] = v[i]+1;
		}
	}

	for(int c=0; c<6; c++) {
		printf("%i ", v[c]);
	}
	printf("\n");
	return 0;
}
