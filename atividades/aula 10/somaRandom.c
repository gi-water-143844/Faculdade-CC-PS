#include <stdio.h>
#include <stdlib.h>

int main() {
	int soma = 0;
    	FILE *arq = fopen("random.txt","r");

	    char linha[3+1];
	    while (1) {
	        fscanf(arq, "%3[^\n]%*c", linha);
	        if (feof(arq)) {
	            break;
	        } else {
		   int x = atoi(linha);
		   soma += x;
		}
	    }
	    printf("soma: %i\n", soma);
	    fclose(arq);
	    arq = NULL;
	    return 0;
}
