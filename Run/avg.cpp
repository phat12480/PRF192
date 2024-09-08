#include <stdio.h>
int main (){
	double avg;
	int i,count;
	int sum;
	int n;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}		
	//Write your statements here
	//.....
	sum=0;
	count=0;
	for (i=0;i<=n-1;i++){
		printf("i=%d \n",i);
		if (i%2==0){
			if (a[i]%2!=0){
				sum=sum+a[i];
						printf("sum=%d \n",sum);
				count++;
						printf("count=%d \n",count);	
			}
			
		}

	}
	
		avg=(double)sum/count;
printf("%.2lf\n",avg);
}

