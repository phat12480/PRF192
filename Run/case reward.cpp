#include <stdio.h>
using namespace std;
int main ()
{
	int mark; int reward; int noofshirts;
	printf ("Your mark :");
	scanf ("%d", &mark);
	switch (mark)
{
case 10: reward = 1000000;
			noofshirts = 4;
			break;
case 9: reward = 500000;
			noofshirts = 3;
			break;
case 8: reward = 200000;
		noofshirts = 2	;
break;
case 7 : reward = 100000;
		noofshirts = 1;
		break;
default : reward = 0;
noofshirts = 0;
break ;
}
printf ("Reward : %d, Shirts : %d\n", reward, noofshirts);
getchar (); getchar ();
return 0;
}








