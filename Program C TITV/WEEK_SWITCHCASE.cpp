#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	
	
	
	printf("\nnhap a va b va c");
	scanf("%d %d %d", &a, &b, &c);
	printf("\na va b va c la %d %d %d", a,b,c);

switch (a){
	case 1:
		printf("\nTH2");
		break;
	case 2:
		printf("\nu TH3");
		break;
	case 3:
		printf("\nu TH4");
		break;
	case 4:
		printf("\nu TH5");
		break;
	case 5:
		printf("\nu TH6");
		break;
	case 6:
		printf("\nu TH7");
		break;
	case 7:
		printf("\nu CN");
		break;
	default:
		printf("\n VUI LONG NHAP LAI");
}

return 0;
}
