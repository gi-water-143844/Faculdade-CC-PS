#include <stdio.h>

int main() {
	int i = 0;
    	FILE *arq = fopen("random.txt","r");

    	char linha[3+1];
    	while (1) {
        	fscanf(arq, "%3[^\n]%*c", linha);
        	if (feof(arq)) {
			break;
        	} else {
			i += 1;
		}
    	}
       	printf("total linhas = %i\n", i);
    	fclose(arq);
    	arq = NULL;
    	return 0;
}
