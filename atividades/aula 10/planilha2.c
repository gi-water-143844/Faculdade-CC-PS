#include <stdio.h>
#include <math.h>

int main() {
	FILE *arq = fopen("planilha2.csv","w");
	int codigos[4] = {23,45,67,89};
	int quantidade[4] = {12,3,65,25};
	float valor[4] = {1.29,2.39,1.19,3.09};
	char descricao[4][15] = {"porca","parafuso","arruela","braçadeira"};

	fprintf(arq,"código, quantidade, valor, descrição\n");
	for (int i=0; i<4; i++) {
		fprintf(arq,"%i, %02i, %.2f, %s\n", codigos[i],quantidade[i], valor[i], descricao[i]);
	}
	fclose(arq);
	arq = NULL;
	return 0;
}
