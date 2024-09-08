#include <stdio.h>
#include <ctype.h>
void swap(char* x , char* y){
	int t=*x;
	*x=*y;
	*y=t;
}
void printcharacter(char c1, char c2){
	int i;
	if (c1<c2){
		swap (&c1, &c2);
	}
	for (i=c1; i<=c2; i++){
		printf("%d, %x, %c \n", i,i,i);
	}
}

main (){
	char c1, c2;
	printf("enter c1 and c2");
	scanf ("%c%*c%c", &c1, &c2);
	c1=tolower(c1);
	c2=tolower(c2);
	if (isalpha(c1)==2&&isalpha(c2)==2){
		printcharacter(c1,c2); 
	}
	else {
		printf("input invalid.");
	}
	getchar();
}






