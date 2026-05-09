#include <stdio.h>

typedef struct {
    int qtd;
    float custo;
    char nome[20];
} Produto;

int main (){
    Produto a = {120, 0.10, "porca"};
    Produto b = {80, 0.20, "parafuso"};
    printf("%3i %.2f %s\n%3i %.2f %s\n",a.qtd, a.custo, a.nome, b.qtd, b.custo, b.nome); 
}
    
