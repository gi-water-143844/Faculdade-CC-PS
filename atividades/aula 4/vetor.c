#include <stdio.h>

int main() {
	int v[10] = {12,7,3,15,8,23,9,1,4,5};
	int min = v[0];
	int i = 0;
	while(i<10) {
		if(v[i]<min){
			min = v[i];
		}
		i++;
	}
	printf("Menor: %i\n",min);
	return 0;
}
