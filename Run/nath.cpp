#include <stdio.h>
#include <math.h>
int main (){
	int x, y;
	scanf ("%d %d", &x, &y);
	double can =sqrt (x);
	printf ("%.2lf\n", can);
	double lt = pow (x,y);
	printf ("%.2lf\n", lt);
	int tri = abs (x);
	printf ("%d\n", tri);
	double can3 = cbrt (x);
	printf ("%.2lf\n", can3);
	return 0;
	}


