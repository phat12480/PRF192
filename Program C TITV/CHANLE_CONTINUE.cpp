#include <stdio.h>
#include <math.h>
int main (){
	int n,i;
	
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<=0);
printf("\nn la %d", n);

for(i=1;i<=n;i++){
	if(i%2==0) continue;{
			printf("      %d", i);
	}	
	}


return 0;
}



