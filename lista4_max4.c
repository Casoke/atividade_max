#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 char *lex(char *str1, char *str2) {
	
	 int t1=0,t2=0;
	 
	 
    for(int i=0;str1[i]!='\0';i++){
	t1++;
		}
	
    for(int j=0;str2[j]!='\0';j++){
	t2++;
		}
    int tamanho = (t1+t2)+1;
     char *vf = (char*) malloc(tamanho * sizeof(char));
    strcpy(vf, str1);
    strcat(vf, str2);
    return vf;
    
    
}

int main() {
	char txt1[100];
	char txt2[100];
    fgets(txt1, sizeof(txt1), stdin);
	txt1[strcspn(txt1, "\n")] = '\0';
    fgets(txt2, sizeof(txt2), stdin);
	txt2[strcspn(txt2, "\n")] = '\0';
    char *vf = lex(txt1, txt2);
    printf("%s\n", vf);
	free(vf);
    return 0;
}
