#include <stdio.h>

int fa(int a)
{
	int r=1;
	for(int i=1;i<=a;i++){
	 r *= i;}
	
return (r);
}

int main() {
	int r;
	
	r=fa(8);
	printf("%d",r);
	
	
	return 0;
	}
