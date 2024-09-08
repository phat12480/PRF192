#include<stdio.h>
#include<stdlib.h>
//tu O(n) den O(n^2)
int insertionSort( int a[], int n){
	for (int i=1;i<n;i++){
		int j=i;
	while (j>0 && a[j]<=a[j-1]){
		int tmp=a[j];
		a[j]=a[j-1];
		a[j-1]= tmp;
		j--;
	}
	}
}

int insertionSort1( int a[], int n){
	for (int i=1;i<n;i++){
		int j=i-1;
		int key=a[i];
	while (j>=0 && a[j]>key){	
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;
	}
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertionSort1(a,n);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	} 
}





