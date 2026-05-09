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

int main () {
	Personagem x = {"Xil", 54, 12, 100};
	Personagem y = {"Yen", 40, 20, 100};
	status(x);
	status(y);
}
