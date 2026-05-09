#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arq = fopen("random.txt","w");

	for (int i=0; i<100; i++) {
		int num = 0 + rand() % (100);
		fprintf(arq, "%03i\n", num);
	}

	fclose(arq);
	arq = NULL;
	return 0;
}
