#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lowercase(char c[]) {
    for (int i = 0; c[i] != '\0'; i++) {
        c[i] = tolower(c[i]);
    }
}

int main() {
    char text[100];

    scanf("%s", text);

    to_lowercase(text);

    printf("%s\n", text);

    return 0;
}
