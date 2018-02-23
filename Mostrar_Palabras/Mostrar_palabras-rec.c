#include <stdio.h>

void out(void);
void in(void);

char c;

int main(){
	
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
		out();break;
	case EOF :
		;break;
	default:
		putchar(c);
		in();
	}
	
	
	system("pause");
	
	return 0;
}

void out(){
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
			out();break;
		case EOF :
			;break;
		default:
			putchar(c);
			in();
		}
	return;
}
	
void in(){
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
			out();break;
		case EOF :
			;break;
		default:
			putchar(c);
			in();
		}
	return;
}