#include <stdio.h>

void primo(int *x) {
   if (*x % 2 == 0) {
       printf("par\n");
   } else {
       printf("ímpar\n");
   }
}

int main() {
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);

    primo(&x);

    return 0;
}
