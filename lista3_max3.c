#include <stdio.h>
#include <string.h>

int  pali( char c[]) {
	int i = 0;
	int f = strlen(c)-1;
	while (i < f) {

		if (c[i] != c[f]) {
			return 0;
		}
		i++;
		f--;
	}
}
int main() {
	char txt[100];

	scanf("%s",txt);
	
	if( pali(txt)) {
		printf("sim");
	}
	else {
		printf("nao");
	}

	return 0;
}
