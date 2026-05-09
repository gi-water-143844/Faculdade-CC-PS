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

void batalha (Personagem p1, Personagem p2) {
	printf("Batalha:\n");
	int i = 0;
	while (i==0) {
		int dano_1 = ataque(p1,p2);
		int dano_2 = ataque(p2,p1);
		p1.vida = p1.vida - dano_2;
		p2.vida = p2.vida - dano_1;
		status(p1);
		status(p2);

		if (p1.vida<=0 || p2.vida<=0) {
			i = 1;
		}
	}

	if (p1.vida<=0) {
		printf("%s venceu!\n", p2.nome);
	}
	else if (p2.vida<=0) {
		printf("%s venceu!\n", p1.nome);
	} else {
		printf("ambos perderam...\n");
	}
}

int main () {
	Personagem x = {"Xil", 54, 12, 100};
	Personagem y = {"Yen", 40, 20, 100};
	status(x);
	status(y);
	batalha(x,y);
}

