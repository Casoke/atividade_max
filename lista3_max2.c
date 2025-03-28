#include <stdio.h>

int  vogal( char c){
	
	if (c== 'a'||c=='e' ||c=='i'|| c=='o'|| c=='u'){
		return 1;}
		else {
		return 0;
	}
}
int main()
{
	
    char c;
    scanf("%c", &c);

   printf("%d",vogal(c));

    return 0;
}
 
