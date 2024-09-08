#include <stdio.h>
#include <math.h>
int main (){
	int n,i;
	int sum=0;
	printf("\nnhap n");
	scanf("%d", &n);
	printf("\nn la %d", n);

for(i=0;i<=n;i++){
	sum=sum+i;
	printf("  sum la %d",sum);
}

//while (i<=n){
//	sum=sum+i;
//	i++;
//}
printf("  sum la %d",sum);
return 0;
}



