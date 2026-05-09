#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[] = "ela";
    int len_s1 = strlen(s1);
    char s2[] = "viu";
    int len_s2 = strlen(s2);
    char s3[] = "a";
    int len_s3 = strlen(s3);
    char s4[] = "uva";
    int len_s4 = strlen(s4);
    char e[] = " ";
    
    char *frase = malloc((len_s1+len_s2+len_s3+len_s4+4)*sizeof(char));
    strcpy(frase,s1);
    strcat(frase,e);
    strcat(frase,s2);
    strcat(frase,e);
    strcat(frase,s3);
    strcat(frase,e);
    strcat(frase,s4);
    
    printf("%s \n",frase);
    int t = strlen(frase);
    printf("%i\n", t);
    return 0;
}
