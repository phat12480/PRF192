#include <stdio.h>
#include <math.h>
void swap(int &a, int &b){
	int tam=a;
	a=b;
	b=tam;
}

void sapxepTang(int x[], int n){
	for (int i=0; i<n-1;i++){
		int vitrimin =i;
		for (int j=i+1; j<n;j++){
			if (x[j]<x[vitrimin ]){
				vitrimin =j;
			}
		}
		swap (x[i], x[vitrimin ]);
	}
	
}

void sapxepGiam(int x[], int n){
	for (int i=0; i<n-1;i++){
		int vitrimax =i;
		for (int j=i+1; j<n;j++){
			if (x[j]>x[vitrimax ]){
				vitrimax =j;
			}
		}
		swap (x[i], x[vitrimax ]);
	}
	
}

void printMang( int x[], int n){
	for (int i=0; i<n;i++){
		printf("%d", x[i]);
	}
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
printf("\n Mang tang dan : ");
sapxepTang(a,n); 
printMang(a,n); 

printf("\n Mang giam dan : ");
sapxepGiam(a,n); 
printMang(a,n); 
return 0;
}



