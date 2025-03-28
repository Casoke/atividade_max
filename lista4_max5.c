#include <stdio.h>
#include <string.h>

 int lex(char *str1, char *str2) {
    return strcmp(str1, str2); 
}

int main() {
	char txt1[100];
	char txt2[100];
	scanf("%s",txt1);
	scanf("%s",txt2);
	int resultado = lex(txt1,txt2);
	if (resultado == 11){printf("1");}
	else if (resultado ==-11){printf("-1");}
	else{printf("0");}

    return 0;
}
