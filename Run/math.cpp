#include <stdio.h>
int main () {
long long a, b;
long long tong = a+b, hieu = a-b, tich = 0.1*a*b;
double thuong = 0.1*a/b, du = a%b;
//300/200=1.5 phai *0.1
//a*b= sô lon phai *lld.
scanf ("%lld %lld", &a, &b);

printf ("Tong la : %lld, Hieu la %lld, Tich la : %lld", tong, hieu, tich);
printf ("Thuong la :%.12lf, Du la : %.7lf", thuong, du);
return 0;
}



