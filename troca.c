#include <stdio.h>

void troca(int *a, int *b ){
int x;
x=*a;
*a=*b;
*b=x;	
}
int main() {
	int a, b;
	
	scanf("%d%d",&a,&b);
    troca(&a, &b);
	printf("%d %d",a,b);
	
	return 0;
	}
