#include <stdio.h>
#include <math.h>
int main(){
	float xa,ya,xb,yb,xc,yc;
	float AB,BC, CA;
	float chuvi, dientich, p;
	
	printf("\n nhap toa do A");
	scanf ("%f %f", &xa, &ya);
	printf("\n nhap toa do B");
	scanf ("%f %f", &xb, &yb);
	printf("\n nhap toa do C");
	scanf ("%f %f", &xc, &yc);
	
	AB= sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	BC= sqrt(pow(xb-xc,2)+pow(yb-yc,2));
	CA= sqrt(pow(xc-xa,2)+pow(yc-ya,2));
	
	if (AB+BC >CA && AB+CA >BC && BC + CA >AB){
		printf("\n ABC la tam giac");
		if (AB==BC || AB==CA || BC==CA){
			printf("\n ABC la tam giac can");
		}else {
			printf("\nABC khong phai can");
		}
		chuvi = AB+BC+CA;
	printf("\nchu vi tam giac la %.2f", chuvi);
	
	p=chuvi/2;
	dientich = sqrt (p*(p-AB)*(p-BC)*(p-CA));
	printf("\ndien tich tam giac la %.2f", dientich);
		
	}else printf("\nABC ko la tam giac");
	
	
	
	return 0;
	
	
}









