#include <stdio.h>
#include <math.h>

typedef struct {
    int base;
    int altura;
} Retangulo;

Retangulo *alocacao(){
    Retangulo *p_r = malloc(sizeof(Retangulo));
    p_r -> altura = 1;
    p_r -> base = 4;
    return p_r;
}

float calcula_area(Retangulo *p_r) {
    float area = p_r->altura * p_r->base;
    return area;   
}

float cria_quadrado(Retangulo *p_r) {
    float a = calcula_area(p_r);
    float area_q = a*a;
    return area_q;
}

void imprime(Retangulo *p_r) {
    printf("[%i %i]\n", p_r->altura, p_r->base);
}

int main () {
    Retangulo *x = alocacao();
    imprime(x);
    cria_quadrado(x);
    imprime(x);
    free(x);
    x = NULL;
    return 0;
}
