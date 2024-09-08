#include <stdio.h>
int main (){
	int a[100];
	int n;
		int tong =0;
	do {
		printf("nhap gia tri n");
		scanf("%d", &n);
		
	}while (n<0);
	
	
	for (int i=0; i<n; i++){
		printf("\n a[%d]", i);
		scanf("%d", &a[i]);
		printf("%d", a[i]);
		tong = tong +a[i];
	}
	printf(" gia tri tong la %d", tong);
	
	return 0;
	
	
	
	
}









