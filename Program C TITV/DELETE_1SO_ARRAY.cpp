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

void xoaMangtaiVitri (int x[100], int &n, int vitri){
	for (int i=vitri; i<n-1; i++){
		x[i]= x[i+1];
	}
	n--;
}

void xoaMangtheogiatri (int x[100], int &n){
	int gt;
	printf("Nhap vao gia tri can xoa:");
	scanf("%d", &gt);
	for (int i =0 ; i<n;i++){
		if (x[i]==gt){
			xoaMangtaiVitri(x,n,i); 
		}
	}
	
}

int main (){
	nhapMang(a,n);
	xuatMang(a,n);  
	printf("\n");
	xoaMangtheogiatri(a,n) ;
	printf("\n");
	xuatMang(a,n); 
	return 0;
}




