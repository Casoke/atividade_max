#include <stdio.h>

int cont (char *str){
	int j=0;
	for(int i=0;str[i]!='\0';i++){
		j++;
}
return j;
}

int main() {
	char txt[100];
	scanf("%s",txt);
	printf("%d",cont(txt));
    return 0;
}
