#include <stdio.h>
#include <math.h>

int ktChinhphuong(int x){
	int kc = (int)sqrt(x);
	if (pow(kc,2)==x)
		return 1;
	else
		return 0;
	}
	

int main (){
	int n;
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<0);

if (ktChinhphuong(n)==1 ){
printf("  N la so chinh phuong");
}	
else 
printf("  N not chinh phuong");

return 0;
}



