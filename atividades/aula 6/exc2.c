#include <stdio.h>

typedef struct {
    int qtd;
    float custo;
    char nome[20];
} Produto;

void imprime_produto (Produto x) {
    printf("%3i %.2f %s\n",x.qtd,x.custo,x.nome);
}

int main () {
    Produto a = {120, 0.10, "porca"};
    Produto b = {80, 0.20, "parafuso"};
    imprime_produto(a);
    imprime_produto(b);
}
