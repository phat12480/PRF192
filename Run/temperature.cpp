//int kiemTra(a){
//	int n;
//	printf ("nhap n");
//	scanf ("%d", &n);
//	if (n%2==0){
//		printf ("0");
//	}
//	printf ("0");
//	return a;
//	
//	}
//
//int tinhTongsochan(c){
//	
//	
//	
//}

#include<stdio.h>
#include<math.h>
int main()
{
  //khai b�o bi?n
  long temp, n;
  int S = 0;
  //s? d?ng dowhile d? y�u c?u ngu?i d�ng nh?p v�o s� l?n hon 0
  //n?u n < 0 th� y�u c?u nh?p l?i
  do
  {
    printf("\nNh?p v�o s? nguy�n n l?n hon 0: ");
    scanf("%ld", &n);
    if(n <= 0)
    {
      printf("\n S? n ph?i l?n hon 0, vui l�ng nh?p l?i !");
    }
  }while(n <= 0);
  //g�n bi?n n cho temp, ta s? s? d?ng temp d? d?m c�c ch? s?
  temp = n;
  while(temp != 0)
  {
    if(temp % 2 == 0)
    {
     S = S + temp % 10;
    }
    temp = temp / 10;
  }
  printf("\nT?ng c�c ch? s? ch?n c?a %ld l�: %d",n,S);
 
  printf("\n--------------------------------------\n");
  printf("Chuong tr�nh n�y du?c dang t?i Freetuts.net");
}




