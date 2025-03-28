#include <stdio.h>

double area (double *a){
	double x,pi;
	pi=3.14;
x = pi * (*a) * (*a);
	return (x);
}
int main() { 
	double a,r;
	scanf("%lf",&a);
r = area (&a);
printf("%.3lf",r);

	return 0;
}
