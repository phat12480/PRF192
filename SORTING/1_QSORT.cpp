#include<stdio.h>
#include<stdlib.h>
int cmp (const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
	// return *(int*)a-*(int*)b;
}
int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}





