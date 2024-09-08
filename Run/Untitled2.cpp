#include <stdio.h>
#include <conio.h>
int main ()
{
	char c='A'; int i=1; long l=1000;
	float f=0.5f; double d=12.809;
	printf("Variable c: at addr: &c, value: &c, size: &d\n", &c, c, sizeof(c));
	printf("Variable i: at addr: &i, value: &d, size: &d\n", &i, i, sizeof(i));
	printf("Variable l: at addr: &l, value: &ld, size: &d\n", &l, l, sizeof(l));
	printf("Variable f: at addr: &f, value: &f, size: &d\n", &f, f, sizeof(f));
	printf("Variable d: at addr: &d, value: &lf, size: &d\n", &d, d, sizeof(d));
	getch();
}
