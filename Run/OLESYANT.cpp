#include <stdio.h>
int main (){
	int n,t;
	scanf("%d %d", &n,&t);
	printf("n=%d , t=%d \n", n,t);
	int a;
	scanf("%d", &a);
	int giatria=a;
	int count=0;
	int thuong;
	int du;
	for (;a!=0;){

					du=a%10;
					a=a/10;					
					count++;
					
				}
				
	if(count==n){

		
				if (a%t==0){
					printf("a=%d", giatria);
				}
				else {
					printf("-1");
				}

	
				
	}
	
	
	
	return 0;
}










