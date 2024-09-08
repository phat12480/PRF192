#include <stdio.h>
#include <math.h>

int giaithua(int x){
	int nhangiaithua=1;
	if (x==0||x==1){
		return 1;
	} return x*giaithua(x-1); 
//	else {
//		for (int i=1; i<=x;i++){
//			nhangiaithua=nhangiaithua*i;
//		}
//	} return nhangiaithua;

		
}


int main (){
	int n,i,kq;
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<0);

kq=giaithua(n);
printf("  giai thua la %d", kq); 

return 0;
}



