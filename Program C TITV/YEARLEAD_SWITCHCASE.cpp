#include <stdio.h>
#include <math.h>
int main (){
	int n,a,nhuan;
	
	printf("\nnhap n");
	scanf("%d", &n);
	scanf("%d", &a);
	printf("\nn la %d", n);

if ((a%4==0 && a%100!=0)||a%400==0){
	printf("\nyear lead");
	nhuan=1;
} else{
	printf("\nnot year lead");
	nhuan=0;}
	

switch (n){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("\nco 31 ngay");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("\nco 30 ngay");
		break;
	case 2:
		if (nhuan ==1){
		printf("\nco 29 ngay");
		break;}
		else {
			printf("\nco 28 ngay");
			break;	
		}
	default:
		printf("\nvui long nhap lai");	
}

return 0;
}



