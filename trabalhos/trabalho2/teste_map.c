#include <stdio.h>
#include <assert.h>
#include "map.h"

int main() {
	/*cria um mapa 5x5 'vazio', ou seja, todos seus campos são '.' */
	Map *m = map_create(5,5);
	assert(m!=NULL);

	/*verifica se as linhas e colunas correspondem aos valores definidos*/
	assert(map_rows(m) == 5);
	assert(map_cols(m) == 5);

	/*criação 'manual' do mapa*/
	for (int r=0; r<3; r++) {
		map_set(m,r,3,WALL);
	}
	for (int c=0; c<3; c++) {
		map_set(m,0,c,WALL);
	}
	for (int r=1; r<5; r++) {
		map_set(m,r,0,WALL);
	}
	map_set(m,4,1,WALL);
	map_set(m,4,2,WALL);
	map_set(m,3,2,WALL);

	/*print para ver o mapa 'm' criado (coloque os outros 'stdout' como comentário para poder vizualizar o desejado)*/
	map_print(m,stdout);
	map_free(m);

	/*lê um arquivo texto que possui um mapa e o cria através das funções de map.c*/
	Map *ml = map_load("mapa.txt");
	assert(ml!=NULL);
	/*mostra o mapa lido do arquivo antes de alterá-lo*/
	/*map_print(ml,stdout);*/

	/*pega qual o símbolo naquela posição do mapa e printa na tela*/
	char x = map_get(ml,0,2);
	printf("ml[0][2] antes: %c\n",x);
	/*altera o símbolo que era '#', para '.' */
	map_set(ml,0,2,OPEN);
	x = map_get(ml,0,2);
	/*mostra o símbolo após a mudança*/
	printf("ml[0][2] depois: %c\n\n",x);

	/*mostra o mapa do arquivo após alterá-lo através das funções de map.c*/
	//map_print(ml,stdout);

	map_free(ml);

	printf("OK!\n");
	return 0;
}
