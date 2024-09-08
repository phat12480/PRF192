#include <stdio.h>
int main (){
	int a,b,min, max;
	printf("\nnhap a va b");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d", a,b);

min = (a<b)?a:b;
max = (b>a)?b:a;

printf("\nmin la %d va max la %d", min, max);

return 0;
}






