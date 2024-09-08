#include <stdio.h>
int main ()
{
	int s,x,flag,n, i;
		s=0;
		flag=1;
		printf ("nhap x:"); scanf ("%d", &x);
		printf ("nhap n:"); scanf ("%d", &n);
	
	for (i=1; i<=n && flag ==1; i++)
	{
		s+=i;
		x--;
		if (x==0)
		{
			flag=0;
		}
	}
	printf ("s=%d", s);
	getchar();
	return 0;
}





