#include <stdio.h>

void mes (int *a){
if(*a==1){printf("janeiro\n");}
else if(*a==2){printf("fevereiro\n");}
else if(*a==3){printf("março\n");}
else if(*a==4){printf("abril\n");}
else if(*a==5){printf("maio\n");}
else if(*a==6){printf("junho\n");}
else if(*a==7){printf("julho\n");}
else if(*a==8){printf("agosto\n");}
else if(*a==9){printf("setembro\n");}
else if(*a==10){printf("outubro\n");}
else if(*a==11){printf("novembro\n");}
else if(*a==12){printf("dezembro\n");}
else{printf("data invalida\n");}
}
int main() { 
	int a;
	scanf("%d",&a);
	mes(&a);
	return 0;
}
