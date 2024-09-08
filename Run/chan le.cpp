#include <stdio.h>
int main () {
	int n;
	scanf ("%d",&n);
//	if ((n%2)==0) {
//		printf ("N la so chan !");
//		}
//	else  {printf ("N la so le !");}

//if ((n>=50) && (n<=100)){
//	printf ("N thuoc 50 den 100");
//	}
//	else {printf (" N nam ngoai 50 den 100");}

//if ((n%400==0) || (n%4==0 && n%100 !=0)) {
//	printf ("nam nhuan");
//}
//else {
//printf ("nam khong nhuan");
//}
if ((n==1 || n==3 || n==5 || n==7 ||n==8|| n== 10 || n==12)) {
	printf ("31");
}
else if ((n==4 || n==6 || n==9 || n==11)) {
	printf ("30");
}
else if ((n==2)){
	printf ("28");
}
else {
	printf ("ngoai thang");
}
	return 0;
	}


