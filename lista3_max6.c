#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_upper_case(char c[]) {
    for (int i = 0; c[i] != '\0'; i++) {
        c[i] = toupper(c[i]);
    }
}

int main() {
    char text[100];

    scanf("%s", text);

    to_upper_case(text);

    printf("%s\n", text);

    return 0;
}
