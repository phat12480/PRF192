#include <stdio.h>
#include <math.h>

void swap_thamtri(int a, int b){
	int c=a;
	a=b;
	b=c;
}

void swap_thamchieu (int &a, int &b){
	int c=a;
	a=b;
	b=c;
}

int main (){
	int a,b;
	
	do{
	printf("\nnhap a va b ");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d ", a,b);
	} while (a<0||b<0);

swap_thamtri(a,b);
printf("  Hoan doi tham tri %d %d", a,b); 

swap_thamchieu(a,b);
printf("   hoan doi tham chieu %d %d", a,b); 
return 0;
}



