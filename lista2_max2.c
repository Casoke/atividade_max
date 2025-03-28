#include <stdio.h>

double volume (double *a){
double v,pi;
pi=3.14;
v=((4*pi)/3)*(*a);
return (v);
}
int main() { 
	double a,r;
	scanf("%lf",&a);
	r=volume(&a);
	printf("%.2lf",r);
	return 0;
}
