#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int rounds (Personagem p1, Personagem p2) {
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
	int v = p1.vida;
	return v;
}

Personagem inimigo (char nome_recebido[]) {
	Personagem i;
	strcpy(i.nome,nome_recebido);
	// int num = min + rand() % (max - min + 1);
	i.poder = 20 + rand() % (11); 	//gera um numero aleatório entre 20 e 30;
	i.defesa = 10 + rand() % (21);	//gera um numero aleatório entre 10 e 30;
	i.vida = 20 + rand() % (31);	//gera um numero aleatório entre 20 e 50;
	return i;
}

int main () {
	Personagem x = {"Xil", 54, 12, 100};
	status(x);
	printf("Inimigos:\n");
	char lista_nomes[5][10] = {"Zed","Ray","Lud","Mad","Gen"};
	Personagem inimigos[5];

	for (int i=0; i<5; i++) {
		inimigos[i] = inimigo(lista_nomes[i]);
		status(inimigos[i]);
	}

	for (int c=0; c<5; c++) {
		printf("----Round %i:\n", c+1);
		int v = rounds(x,inimigos[c]);
		x.vida = v;
		status(x);
	}
}
