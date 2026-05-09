#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s1[] = "copa";
	int len_s1 = strlen(s1);

	char s2[] = "cabana";
	int len_s2 = strlen(s2);

	char *r = malloc((len_s1+len_s2+1)*sizeof(char));
	strcpy(r,s1);
	strcat(r,s2);
	printf("%s \n",r);
	return 0;
}
