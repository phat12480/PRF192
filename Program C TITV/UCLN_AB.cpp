#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	int Ucln;
	printf("\nnhap a va b ");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d ", a,b);

if(a==0 ||b==0){
	Ucln=a+b;
	printf("      Ucln la %d", Ucln);
}
else if(a>b){
			a=a-b;
		}
		else {
			b=b-a;
		}
//	if (a!=b)
//{
//	if(a>b){
//		a=a-b;
//	}
//	else {
//		b=b-a;
	Ucln = a;
	printf("     Ucln la %d", Ucln);

return 0;
}



