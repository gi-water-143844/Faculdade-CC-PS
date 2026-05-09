#include <stdio.h>

int main() {
	char s[50];

	printf("Digite primeiro e último nome: ");
	fgets(s, 50, stdin);  //inclui tudo que foi digitado, até o espaço
	printf("Nome: %s", s);
	return 0;
}
