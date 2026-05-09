#include <stdio.h>

typedef struct {
	int qtd;
	float custo;
	char nome[20];
} Produto;

void imprime_produto (Produto p) {
	printf("%3i %.2f %s\n", p.qtd, p.custo, p.nome);
}

float valor_produto (Produto p) {
	float valor = p.qtd * p.custo;
	return valor;
}

int main() {
	Produto vp[2] = {{120, 0.10, "porca"}, {80, 0.20, "parafuso"}};
	imprime_produto(vp[0]);
	imprime_produto(vp[1]);
	float valor1 = valor_produto(vp[0]);
	float valor2 = valor_produto(vp[1]);
	float total = valor1 + valor2;
	printf("total: R$ %.2f\n", total);
}
