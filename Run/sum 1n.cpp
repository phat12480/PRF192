#include <stdio.h>
int main (){
	int i,n;
	double sum =0, sum1=0;
		scanf ("%d", &n);
for (i=1; i<=n;i++){
		sum1=sum1+i;
		sum=sum+ 1/sum1;
	}
	printf("gia tri tong la %.3lf", sum);
	return 0;
}







