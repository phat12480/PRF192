#include <stdio.h>
int main (){
	int a,b,chanle;
	printf("\nnhap a va b");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d", a,b);
	
	chanle=(a%2==0)?0:1;
	printf("\nchan hay le la %d", chanle);
	
	if(chanle==0){
		printf("\nchan");
		
	}
	else 	
		printf("\nle");	
	
	
	
	return 0;
}














