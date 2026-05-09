#include <stdio.h>

int main() {
    FILE *arq = fopen("arquivo.txt","w");
    
    fprintf(arq, "Isso é um teste!\n");
    fprintf(arq, "palavra\n");
    fprintf(arq, "%i %f\n", 1, 2.34);
    
    fclose(arq);
    arq = NULL;
    
    return 0;
}
