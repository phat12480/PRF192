#include<stdio.h>
#include<stdlib.h>
// 0(nlogn) -> 0(n^2)
void swap(int a[], int x, int y){
	int tmp = a[x];
	a[x]= a[y];
	a[y]=tmp;
}

int partition(int a[], int l, int r){
	int pivot = a[l];
	int count =0;
	for (int i=l+1;i<=r;i++){
		if (a[i]<=pivot) count++;
	}
	int pivotindex = l+count;
	swap (a,l,pivotindex);
	int i=l;
	int j=r;
	while (i<pivotindex && j>pivotindex){
		while (a[i]<=pivot) i++;
		while (a[j]>=pivot) j--;
		if (i<pivotindex && j>pivotindex){
			swap(a,i,j);
		}
	}
}

void quicksort(int a[], int l, int r){
	if (l>=r) return ;
	int pivot = partition(a,l,r);
	quicksort(a,l,pivot-1);
	quicksort(a,pivot+1,r);
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	} 
}



