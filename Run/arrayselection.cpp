#include <stdio.h>
void ascselectionsort(int* a,int n){
	int minindex;
	int i,j;
	for (i=0;i<=n-1;i++){
		minindex =i;
		for (j=i+1;j<n;j++){
			if (a[minindex]> a[j]) minindex =j;
			if (minindex >i){
				int t=a[minindex];
				a[minindex]=a[i];
				a[i]=t;
			}
			
		}
	}
	
}

void print (int*a, int n){
	int i;
	for (i=0; i<n;i++){
		printf(" %d ", a[i]);
	}
}

int main (){
	int a[]= {1,3,5,7,9,2,4,6,8,0};
	ascselectionsort(a,10); 
	print(a,10); 
	getchar();
	
	return 0;
}










