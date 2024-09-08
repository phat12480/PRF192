#include <stdio.h>

float Trungbinhcongsoduong (int b[], int x){
int sum=0;
int soluongduong=0;
for (int y=0; y<x;y++){
	if (b[y]>=0){
	 soluongduong ++;
	sum=sum + b[y];
}

}
return (float)sum/soluongduong;
}
int main (){
	int a[100];
	int n;

	do {
	printf("nhap gia tri n<1 va n>100");
	scanf("%d", &n);
}	while (n<1 || n>100);

for (int i =0; i<n;i++){

	printf("a %d la ", i);
		scanf("%d", &a[i]);
	
	}
		float avg=Trungbinhcongsoduong(a,n) ;
	printf("\ngia tri trung binh la %.2f", avg);
	
	return 0;
}














