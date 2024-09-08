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
	printf("Tgia tri mang la ");
	for (int i=0;i<n;i++){
		printf("%d", x[i]);
	}
}


int kiemtraMangcon(int x1[100], int n1, int x2[100], int n2){
	int kq=0;
	if (n2<=n1){
		for (int i=0;i<n;i++){
			if (x1[i]==x2[0]){
				int j=0;
				for ( ; j<n2;j++){
					if (x1[i+j]!=x2[j])
					break;
				}
				if (j==n2){
					kq=1;
				}
			}
		}
	}	
	
	
	return kq;
}
	


int main (){
	int n1,n2,n3;
	nhapMang(a,n1);
	xuatMang(a,n1);  

	nhapMang(b,n2);
	xuatMang(b,n2); 
		
int kt=kiemtraMangcon(a,n1,b,n2);
if (kt){
	printf("\n Mang b la mang con cua a");
	
} 	
else {
	printf("\n khong phai con");
} 	
	 
		  
	return 0;
	
}




