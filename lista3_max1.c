#include <stdio.h>

int  vogal( char c){
	
	if ( c== 'a'||c=='e' ||c=='i'|| c=='o'|| c=='u'|| c== 'A'||c=='E' ||c=='I'|| c=='O'|| c=='U'){
		return 0;}
		else {
		return 1;
	}
}
int main()
{
	
    char c;
    scanf("%c", &c);

   printf("%d",vogal(c));

    return 0;
}
 
