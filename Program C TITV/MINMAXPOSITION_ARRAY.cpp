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

int timMinthuhai(int x[100], int n){
	
	int min = INT_MAX;
	int min_2 = INT_MAX;
	
	for (int i=0; i<n; i++){
		if (x[i]<min){
			min =x[i];
		}
		
	}
	for (int i=0; i<n;i++){
		if (x[i]==min){
			continue;
		}
		else {
			if (x[i]<min_2){
				min_2 = x[i];
			}
		}
	}
	return min_2;
}

int timMaxthuhai(int x[100], int n){
	
	int max = INT_MIN;
	int max_2 = INT_MIN;
	
	for (int i=0; i<n; i++){
		if (x[i]>max){
			max =x[i];
		}
		
	}
	for (int i=0; i<n;i++){
		if (x[i]==max){
			continue;
		}
		else {
			if (x[i]>max_2){
				max_2 = x[i];
			}
		}
	}
	return max_2;
}


int main (){
	nhapMang(a,n);
	xuatMang(a,n);  
	printf("\n");
	//xuatMangNguoc(a,n);
	//daoNguocMang(a,n);
	//xuatMang(a,n);  
	//	thucHientimkiem(a,n); 
	printf("Min_2 = %d", timMinthuhai(a,n) );
	printf("Max_2 = %d", timMaxthuhai(a,n) );
	return 0;
}




