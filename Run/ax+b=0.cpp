#include<stdio.h>
main()
{
	int a,b;
	double x;
	printf(" nhap a va b : ");
	scanf ("%d%d", &a, &b);
	if (a!=0) {
			x=-(double)b/a;
			printf ("PT co nghiem x = %lf", x);
			
	}
	else if (a==0){
		if (b==0){
			printf ("PT co vo so nghiem.");
		}else if (b!=0){
			printf ("PT vo nghiem.");
		}
	}
	getchar();
}



