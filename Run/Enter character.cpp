#include <stdio.h>
int main ()
{ int n;
char c;
printf("Enter an integer:");
scanf("%d%*c",&n);
fflush(stdin);
printf("Enter a character:");
scanf("%c",&c);
printf("n=%d,c=%c",n,c);
getchar();
return 0;
}

