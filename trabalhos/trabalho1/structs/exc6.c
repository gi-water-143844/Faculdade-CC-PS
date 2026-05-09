#include <stdio.h>

typedef struct {
	char nome[10];
	int poder;
	int defesa;
	int vida;
} Personagem;

void status (Personagem p) {
	printf("%s poder=%03i defesa=%03i vida=%03i\n", p.nome, p.poder, p.defesa, p.vida);
}

int ataque (Personagem p1, Personagem p2) {
	int dano;
	dano = p1.poder - p2.defesa;
	if (dano<0) {
		dano = 0;
	}
	return dano;
}

int main () {
	Personagem x = {"Xil", 54, 12, 100};
	Personagem y = {"Yen", 40, 20, 100};
	status(x);
	status(y);
	int dano_xy = ataque(x,y);
	int dano_yx = ataque(y,x);
	printf("ataque de %s a %s vai causar %2i de dano\n", x.nome, y.nome, dano_xy);
	printf("ataque de %s a %s vai causar %2i de dano\n", y.nome, x.nome, dano_yx);
}

