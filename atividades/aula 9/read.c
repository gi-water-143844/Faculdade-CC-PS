#include <stdio.h>

int main() {
    FILE *arq = fopen("arquivo.txt","r");
    
    char linha[100+1];
    while (1) {
        fscanf(arq, "%100[^\n]%*c", linha);
        if (feof(arq)) {
            break;
        }
        printf("%s\n", linha);
    }    
    
    fclose(arq);
    arq = NULL;
    
    return 0;
}
