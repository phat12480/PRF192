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
  //khai báo bi?n
  long temp, n;
  int S = 0;
  //s? d?ng dowhile d? yêu c?u ngu?i dùng nh?p vào só l?n hon 0
  //n?u n < 0 thì yêu c?u nh?p l?i
  do
  {
    printf("\nNh?p vào s? nguyên n l?n hon 0: ");
    scanf("%ld", &n);
    if(n <= 0)
    {
      printf("\n S? n ph?i l?n hon 0, vui lòng nh?p l?i !");
    }
  }while(n <= 0);
  //gán bi?n n cho temp, ta s? s? d?ng temp d? d?m các ch? s?
  temp = n;
  while(temp != 0)
  {
    if(temp % 2 == 0)
    {
     S = S + temp % 10;
    }
    temp = temp / 10;
  }
  printf("\nT?ng các ch? s? ch?n c?a %ld là: %d",n,S);
 
  printf("\n--------------------------------------\n");
  printf("Chuong trình này du?c dang t?i Freetuts.net");
}




