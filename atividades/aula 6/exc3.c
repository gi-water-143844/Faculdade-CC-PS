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
	Produto a = {120, 0.10, "porca"};
	Produto b = {80, 0.20, "parafuso"};
	imprime_produto(a);
	imprime_produto(b);
	float valor_a = valor_produto(a);
	float valor_b = valor_produto(b);
	float total = valor_a + valor_b;
	printf("Valor total: R$ %.2f\n", total);
}
