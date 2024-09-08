#include <stdio.h>
int main (){
//int n;
//scanf ("%d",&n);
//switch (n){
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf ("31");
//		break;
//	case 4: case 6: case 9: case 11:
//		printf ("30");
//		break;
//	case 2:
//		printf ("28");
//		break;

int a=11, b=22;
char kitu;
scanf ("%c", &kitu);
switch (kitu){
	case '+':
		printf ("%d", a+b);
		break;
	case '-':
		printf ("%d", a-b);
		break;
	case '*':
		printf ("%d", a*b);
		break;
	case '/':
		printf ("%d", a/b);
		break;
	default :
		printf ("khong hop le");
	}
	





return 0;	
}



