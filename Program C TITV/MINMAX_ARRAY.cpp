#include <stdio.h>
#include <math.h>

int timMin (int x[], int a){
	int min=x[1];
	for (int i=1; i<a;i++){
	if(min>x[i])
	min=x[i];
}
return min;
}

int timMax (int x[], int a){
	int max=x[1];
	for (int i=1; i<a;i++){
	if(max<x[i])
	max=x[i];
}
return max;
}

int main (){
	int n,i;
	int a[100];
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<1||n>100);

	for (i=0; i<n;i++){
		printf("a[%d]", i);
		scanf("%d", &a[i]);
		
	}
printf("min %d", timMin(a, n) );
printf("max %d", timMax(a, n) );

return 0;
}



