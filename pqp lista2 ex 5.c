#include <stdio.h>

int fatorial(int *x) {
    int i, r = 1;
    for (i = 1; i <= *x; i++) {
        r *= i;
    }
    return r; 
}

int main() {
int x;
	scanf("%d",&x);
    printf("Fatorial: %d\n", fatorial(&x));

    return 0;
}
