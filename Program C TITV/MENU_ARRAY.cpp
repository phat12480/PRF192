#include <stdio.h>
#include <limits.h>
#include <conio.h>
int a[100];
int n;

void nhapMang (int x[100], int &n){
	do{
	printf("Nhap vao so luong n");
	scanf ("%d", &n);
}while (n<1);
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
	char gt;
do{
	printf("menu\n");
	printf("1 - Nhap mang\n");
	printf("2 - Xuat mang\n");
	printf("3 - Them phan tu vao cuoi mang\n");
	printf("4 - Them phan tu vao dau mang\n");
	printf("5 - Them phan tu vao vi tri k\n");
	printf("x - thoat\n");
	printf("Lua chon ban la ");
	scanf(" %c", &gt);

	if (gt='1'){
		nhapMang(a,n); 
	}else if (gt=='2'){
		xuatMang(a,n); 
	}else if (gt =='3'||gt=='4'||gt=='5'){
		int m;
		printf("\n Nhap vao m=");
		scanf("%d", &m);
		int k;
		printf("\n Nhap vao k=");
		scanf("%d", &k);
		if (gt=='3'){
			themVaocuoimang(a,n,m);
		}		
		else if (gt=='4'){
			themDAUcuoimang(a,n,m);
		}
		else if (gt=='5'){
			themvaovitriK(a,n,m,k); 
		}
	}
	
}while (gt!='x');
	return 0;
	
}




