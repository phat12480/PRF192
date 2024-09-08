#include <stdio.h>
#include <conio.h>
int main (){
	int i,n;
	i=1;
	n=0;
	while (i>n)
	{
		while (i<4)
		i+=2;
		n++;
		i-=3;
	}
printf ("%d %d", i,n);
	getch();
}




