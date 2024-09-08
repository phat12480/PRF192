#include <stdio.h>

int sumtich(int x){
	int tich =1, sum=0;
	int i;
	for (i=1;i<=x;i++){
		tich = tich*i;
		sum=sum+tich;
	}
	return sum;
}


double sum1n (int a){
	int i;
	double sum =0, sum1=0;
for (i=1; i<=a;i++){
		sum1=sum1+i;
		sum=sum+ 1/sum1;
	}

	return sum;
}

void gcl (int b){
	int i;
	for (i=1; i<=b/2;i++){
		if (b%i==0)
			printf("%d", i);	
	}

}

int main (){
	int n;
	scanf ("%d", &n);


	printf("\ngia tri tong la %d", sumtich(n) );
	printf("\ngia tri tong la %.3lf\n", sum1n(n) );
	printf("\nuoc cua n la " );
	gcl(n); 
	return 0;
}








