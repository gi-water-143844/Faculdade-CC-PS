#include <stdio.h>

int main() {
	int v[6] = {11,22,33,44,55,66};
	int len_r = 0;
	for(int i=0; i<6;i++) {
		len_r++;
	}

	int r[len_r];
	int x = 0;

	for (int c=5; c>=0; c--) {
		r[x] = v[c];
		x++;
	}

	int s = 0;

	while (s<6) {
		printf("%i ", r[s]);
		s++;
	}
	printf("\n");
	return 0;
}

