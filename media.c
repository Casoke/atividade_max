#include <stdio.h>

float media (int *[]v, int n)
{ int s=0 
for (int i=0 ;i<n; i++){
s+= v[i];
}
 float m=s / (float)n;
 return m;
}


int main() {
	float r;
	r=media (5,5,5);
	printf("resultado %.3f",r);
	return 0;
	}
