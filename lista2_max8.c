#include <stdio.h>

#define N 80

void vetor_fibonat(unsigned long long fib[]) {
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i < N; i++) fib[i] = fib[i - 1] + fib[i - 2];
}

int main() {
    unsigned long long fib[N]; 
    int posicao;
    
    vetor_fibonat(fib);
    scanf("%d", &posicao);

    if (posicao < 1 || posicao > N) {
        printf("número inválido\n");
    } else {
        printf("%llu\n", fib[posicao - 1]);
    }

    return 0;
}
