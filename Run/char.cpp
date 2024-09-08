#include <stdio.h>
#include <math.h>
int main (){
	char kitu;
	scanf ("%c", &kitu);
//	if ((kitu>=65 && kitu <=90)) {
//		printf ("chu in hoa");
//	}
//		else 
//		
//	if ((kitu >=97 && kitu <=122))
//{
//printf ("chu in thuong");
//	}	
//	else if ((kitu>=48 && kitu <=57))
//	{
//		printf ("chu so");
//	}
//	else {
//		printf ("ky tu dac biet");
//	}

if ((kitu >= 'A' && kitu <='Z')) {
kitu += 32;
printf ("%c", kitu)	;
}
else {
	printf ("ngoai le");
}

	return 0;
}




