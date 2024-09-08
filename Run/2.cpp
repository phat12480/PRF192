#include <stdio.h>
int main (){
	int a=5, c;
	c=a++;
	printf ("%d %d\n",a,c);
	scanf ("%d?", &a);
	c=a--;
	printf ("%d %d\n", a, c);
	c=a + c;
	printf ("%d %d", c, a);
	return 0;
	}


