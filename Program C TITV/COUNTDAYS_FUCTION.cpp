#include <stdio.h>
#include <math.h>

int soNgay(int thang, int nam){
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam %400==0 || (nam %4==0 && nam %100!=0)))?29:28;
	
			
	}
}

int Ngayvalid(int f, int thang){
	if (f==)
	
	
}


int Ngaytrongnam(int ngay, int thang, int nam){
int ntn =0;
for (int i =1; i<thang; i++){
	ntn = ntn + soNgay(i,nam);
}
ntn =ntn +ngay;
return ntn;

}

void Ngaytruocdo(int ngay, int thang, int nam){
	if (ngay==1){
		if (thang ==1){
			ngay=31;
			thang=12;
			nam--;
		}
		else {
			--thang;
			ngay=soNgay(thang,nam) ;
		}
	}
	else {
		ngay--;
	}
	printf("ngay truoc do %d %d %d", ngay,thang,nam);
}

int Ngaykedo(int ngay, int thang, int nam){
	int nct = soNgay(thang,nam);
	if (ngay ==nct){
		if (thang ==12){
			ngay=1;
			thang=1;
			nam++;
		}
		else {
			ngay=1;
			thang++;
		}
	} 
	else {
		ngay++;
	}
	printf("ngay sau do %d/%d/%d", ngay,thang,nam);
}



int main () {


	int a,b,c;
	
	do {
	printf("\nnhap a va b va c");
	scanf("%d %d %d", &a, &b, &c);
	printf("\na va b va c la %d %d %d", a,b,c);
 } while (a<0||b<0||c<0||a>31||b>12);
 printf(" a la ngay, b thang, c nam");

printf("   so ngay cua thang %d", soNgay(b,c));
printf ("   ngay trong nam %d", Ngaytrongnam(a,b,c) );
Ngaytruocdo(a,b,c);
Ngaykedo(a,b,c);  
return 0;

}



