#include <stdio.h>


int main(){
	char c;
	
	c=getchar();
	
	switch(c){
	case '\n':
	case '\t':
	case ' ' :
		printf("\n");
	case '1' :
	case '2' :
	case '3' :
	case '4' :
	case '5' :
	case '6' :
	case '7' :
	case '8' :
	case '9' :
	case '0' :
		goto OUT;break;
	case EOF :
		;break;
	default:
		putchar(c);
		goto IN;
	}
	
	OUT:{
		c=getchar();
		
		switch(c){
			case '\n':
			case '\t':
			case ' ' :
				printf("\n");
			case '1' :
			case '2' :
			case '3' :
			case '4' :
			case '5' :
			case '6' :
			case '7' :
			case '8' :
			case '9' :
			case '0' :
				goto OUT;break;
			case EOF :
				;break;
			default:
				putchar(c);
				goto IN;
		}
	}
	
	IN:{
		c=getchar();
		
		switch(c){
			case '\n':
			case '\t':
			case ' ' :
				printf("\n");
			case '1' :
			case '2' :
			case '3' :
			case '4' :
			case '5' :
			case '6' :
			case '7' :
			case '8' :
			case '9' :
			case '0' :
				goto OUT;break;
			case EOF :
				;break;
			default:
				putchar(c);
				goto IN;
		}
	}
	
	system("pause");
	
	return 0;
}
