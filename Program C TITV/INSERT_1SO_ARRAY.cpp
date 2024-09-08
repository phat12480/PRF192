#include <stdio.h>
#include <limits.h>

int a[100];
int n;

void nhapMang (int x[100], int &n){
	printf("Nhap vao so luong n");
	scanf ("%d", &n);
	for (int i=0; i<n;i++){
		printf("x[%d]", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang (int x[100], int n){
	printf("Tgia tri mang la ");
	for (int i=0;i<n;i++){
		printf("%d", x[i]);
	}
}

void themVaocuoimang(int x[100], int &n , int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("khon the them vao");
	}
	x[n]= m;
	n++;
	
}

void themDAUcuoimang(int x[100], int &n , int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("khon the them vao");
	}

	n++;
	for (int i=n-1; i>0;i--){
		x[i]= x[i-1];
	}
	x[0]=m;
}

void themvaovitriK(int x[100], int &n, int m, int k){

	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("khon the them vao");
	}

	n++;
	for (int i=n-1; i>k;i--){
		x[i]= x[i-1];
	}
	x[k]=m;
}



int main (){
	nhapMang(a,n);
	xuatMang(a,n);  
	printf("\n");
themVaocuoimang(a,n,99);
printf("\n");
xuatMang(a,n);  
themDAUcuoimang(a,n,99);
printf("\n");
xuatMang(a,n);
themvaovitriK(a,n,77,3); 
printf("\n");
xuatMang(a,n);
	return 0;
	
}




