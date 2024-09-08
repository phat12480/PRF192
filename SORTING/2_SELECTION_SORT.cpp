#include<stdio.h>
#include<stdlib.h>
void selectionsort(int a[], int n){
	for (int i=0;i<n-1;i++){
		int imin=i;
		int valuemin=a[i];
		for (int j=i+1;j<n;j++){
			if (a[j]<valuemin){
				valuemin=a[j];
				imin=j;
			}
		}
		int tmp=a[i];
		a[i]=a[imin];
		a[imin]=tmp;
	}
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionsort(a,n);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	} 
}



