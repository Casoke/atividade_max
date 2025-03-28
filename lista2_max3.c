#include <stdio.h>

double media (double *a, double*b, double *c){
double m;
m= (*a + *b + *c) /3;
return (m);
}
int main() { 
	double a,b,c,r;
	scanf("%lf%lf%lf",&a,&b,&c);
	r=media(&a,&b,&c);
	printf("%.2lf",r);
	return 0;
}
