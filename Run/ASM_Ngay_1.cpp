#include <stdio.h>
#include <conio.h>
int main ()
{
	float chieuDai;
	float chieuRong;
	float chuVi, dienTich;
	printf("Vao du lieu tu ban phim \n");
	//nhap chieu dai hinh chu nhat
	printf("\n Chieu dai = ");
	scanf("%f ,&chieuDai");
	//nhap chieu rong hinh chu nhat
	printf("\n Chieu rong =");
	scanf("%f ,&chieuRong");
	printf("\n Thong tin hinh chu nhat.");
	//Tinh chu vi va dien tich
	chuVi = (chieuDai+chieuRong)*2;
	dienTich = chieuDai*chieuRong;
	//Xuat chu vi va dien tich ra man hinh
	printf("\n Chu vi = %0.2f",chuVi);
	printf("\n Dien tich = %0.2f",dienTich);
	
}
