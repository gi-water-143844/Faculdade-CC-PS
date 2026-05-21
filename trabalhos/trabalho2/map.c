#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "map.h"

/* Cria um mapa vazio (todas células com OPEN) com o tamanho fornecido. */
Map *map_create(int rows, int cols) {
	Map *p_m = malloc(sizeof(Map));
	p_m->r = rows;
	p_m->c = cols;
	p_m->map = malloc(rows*cols*sizeof(char));
	for (int i = 0; i <(rows * cols); i++) {
        p_m->map[i] = OPEN;
    }
    return p_m;
}

/* Obtém dimensões. */
int map_rows(const Map *m) {
	return m->r;
}

int map_cols(const Map *m) {
	return m->c;
}

/* Consulta/modifica uma célula (qualquer caractere é válido). */
char map_get(const Map *m, int r, int c) {
	int pos = (r * m->c)+c;
	return m->map[pos];
}
void map_set(Map *m, int r, int c, char ch) {
	int pos = (r * m->c)+c;
	m->map[pos] = ch;
}

/* Imprime o mapa em `out` (por exemplo, `stdout`).*/
void map_print(const Map *m, FILE *out) {
	int linhas = m->r;
	int colunas = m->c;
	fprintf(out,"%i %i\n",linhas,colunas);

	for (int i=0; i<linhas; i++) {
		for (int j=0; j<colunas; j++) {
			int pos = (i*colunas) + j;
			fprintf(out,"%c ",m->map[pos]);
		}
		fprintf(out,"\n");
	}
	fclose(out);
	out = NULL;
}

/* Libera todos os recursos. */
void map_free(Map *m) {
	free(m->map);
	free(m);
}

/* Carrega um mapa de um arquivo de texto. Formato:
* Linha 1: <l> <c>
* Para as próximas `l` linhas: `c` caracteres copiados para a grade.
* Retorna NULL em caso de falha. */
Map *map_load(const char *filename){
	FILE *arq = fopen(filename,"r");
	int rows;
	int cols;
	fscanf(arq,"%i %i",&rows,&cols);
	Map *p_m = map_create(rows,cols);
	for (int r=0; r<rows; r++) {
		for (int c=0; c<cols; c++) {
			char ch;
			if (fscanf(arq," %c",&ch)==1) {
				map_set(p_m,r,c,ch);
			}
		}
	}
	fclose(arq);
	return p_m;
}
