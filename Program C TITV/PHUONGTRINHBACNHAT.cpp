#include <stdio.h>
int main (){
	int a,b;
	double x;
	printf("\nnhap a va b");
	scanf("%d %d", &a, &b);
	printf("\na va b la %d %d", a,b);
	
if(a!=0){
	x=-(double)b/a;
	printf("\nnghiem pt la %.2lf", x);
}
	else if (b==0){
		printf("\npt co vo so nghiem");
}	
		else 
			printf("\npt no vo nghiem");
	
	
	return 0;
}
