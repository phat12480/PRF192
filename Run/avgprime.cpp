#include <stdio.h>
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2;i<=n/2;i++){
		if (n%i==0){
			return 0;
		}
		else return 1;
	}
	
	
	
}
int main (){
	int n;
	int a[100];
	scanf("%d", &n);
	int x;
	scanf("%d", &x);
	int i;
	int sum=0;
	int count =0;
	double avg;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}		
	for (i=0;i<=n-1;i++){
		if (isPrime(a[i])==1){
			printf("a%d = %d\n", i,a[i]);
			if (a[i]>x){
				if (a[i]!=9){
				sum=sum+a[i];
						printf("sum = %d\n", sum);
			count++;
						printf("count = %d\n", count);
			}
				
			}
			
		}
	}
	
		avg=(double)sum/count;
					printf("avg = %.2lf \n", avg);
return 0;	
} 

