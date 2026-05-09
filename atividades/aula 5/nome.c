#include <stdio.h>

int main() {
	char s[20];

	printf("Informe primeiro nome: ");
	scanf("%19s", s);  //informa tamanho máximo de leitura ('\0' ocupa o último caracter
	printf("Nome: %s\n", s);
	return 0;
}
