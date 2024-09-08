#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	double thuong, tronlen, tronxuong, can2, tridoi, luythua;
	printf("\nnhap a va b");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d", a,b);

thuong = (double)a/b;
printf("\nthuong la %.2lf", thuong);

tronlen=ceil(thuong);
printf("\ntron len la %.2lf", tronlen);
tronxuong=floor(thuong);
printf("\ntron xuong la %.2lf", tronxuong);
can2=sqrt(a);
printf("\ncan2 la %.2lf", can2);
tridoi=fabs(thuong);
printf("\ntridoi la %.2lf", tridoi);
luythua=pow(a,b);
printf("\nluythua la %.2lf", luythua);


return 0;
}






