#include <stdio.h>

int par(int a)
{
	int r=a%2;
	if(r==0){r=1;}
	else{r=0;}
	
return (r);
}

int main() {
	int n;
	scanf("%d",&n);
	int r;
	r=par(n);
	if(r==1){printf("%d é par",n);}
	else{printf("%d é inpar",n);}
	
	
	return 0;
	}
