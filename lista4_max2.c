#include <stdio.h>
#include <ctype.h>
void rm(char *str){
	int i=0;
	int inicio=0;
    while (str[inicio] != '\0' && (str[inicio] == ' ' || str[inicio] == '\t' || str[inicio] == '\n')) {
        inicio++;
    }
    int f=0;
    while(str[f]!='\0'){
		f++;}
		f--;
	 while (f >= 0 && (str[f] == ' ' || str[f] == '\t' || str[f] == '\n')) {
        f--;
    }
    while(inicio<f){
		str[i]=str[inicio];
		i++;
		inicio++;
	}
	 str[i] = '\0';
    
    
}
int main() {
	char txt[100];
    fgets(txt, sizeof(txt), stdin);
	rm(txt);
	printf("%s",txt);
    return 0;
}
