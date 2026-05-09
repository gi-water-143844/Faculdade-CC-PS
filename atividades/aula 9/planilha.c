#include <stdio.h>
#include <math.h>

int main() {
    FILE *arq = fopen("planilha.csv","w");
    
    fprintf(arq, "valor x, raiz(x), sin(x)\n");
    for (int x=0; x<=10; x++) {
        float raiz = sqrt(x);
        float s = sin(x);
        fprintf(arq, " %02i, %4.2f, %5.2f\n", x, raiz, s);
    }
    fclose(arq);
    arq = NULL;
    return 0;
}
