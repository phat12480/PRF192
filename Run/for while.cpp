#include <stdio.h>
int main (){
	int i,n, S=0;
	int abs=0;
//	printf ("nhap n:");
	scanf ("%d", &n);
//	for (i=1; i<=n; i++) 
//	S+=i;
//	printf ("%d",S);

//for (i=0; i<=n; i+=3){
//	printf ("%d\n", i);
//	if (i==33){
//		//break;
//		continue;
//		printf ("Xin chao");
//	}
//}
//	
	while (n!=0) {
		abs=abs + n%10;
		n=n/10;
		
	}
	printf ("so chu so : %d", abs);
	return 0;
}


