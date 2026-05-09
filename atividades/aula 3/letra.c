#include <stdio.h>
#include <ctype.h>

int pos(char c) {
	if (c>='A' && c<='Z') {
		return c-64;
	} else {
		return 0;
	}
}

int main() {
	printf("Z = %i\n",pos('Z'));
	return 0;
}
