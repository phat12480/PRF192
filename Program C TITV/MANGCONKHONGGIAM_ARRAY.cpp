





#include <stdio.h>
#include <limits.h>
#include <conio.h>
int a[100], b[100], c[100];
int n,n1,n2;

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
	printf("gia tri mang la ");
	for (int i=0;i<n;i++){
		printf("%d", x[i]);
	}
}

int  timMax(int x[100], int n){
	int max=x[0];
	for (int i=0;i<n;i++){
		if (x[i]>max){
			max=x[i];
		}
	}
	return max;
}

void inMangconkhonggiam (int x[100], int n ){
	int b[100];
	for (int i=0;i<n;i++){
		b[i]=1;
	}
	for (int i=n-1;i>0;i--){
		if (x[i]>=x[i-1]){
			b[i-1]=b[i+1];
		}
	}
	printf("\n Mang B");
	xuatMang(b,n); 
	int soLuong=timMax(b,n);
	for (int i=0;i<n;i++){
		if (b[i]==soLuong) {
			printf("MANG khong giam dai nhat");
			for (int j=i;j<soLuong ; j++){
				printf("%d", x[j]);
			}
		}
	} 
}



int main (){
	int n1,n2,n3;
	nhapMang(a,n);
	xuatMang(a,n);  

inMangconkhonggiam(a,n); 
		
	 
		  
	return 0;
	
}










