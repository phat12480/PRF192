#include <stdio.h>
int s;
void Inchuoi () {
	printf ("Welcome to module   ");
}

int Nhapsonguyen() {
	int x;
	do {
		printf ("Nhap so nguyen   ");
		scanf ("%d", &x);
	}while (x>10);
	return x;
	
}

void Inbinhphuong (int n){
	printf ("n^2 = %d  ", n*n);
	return;
	
}


int Tinhtongcacsochan (int n){
	int i, s;
	s=0;
	for (i=1; i<=n;i++) {
		if (i%2==0){
			s+=i;
		}
	}
	return s;
}


int main () {
	int n, s, x;
	Inchuoi ();
	n=Nhapsonguyen();
	Inbinhphuong(n);
	s= Tinhtongcacsochan(n);
	printf ("s=%d   ", s);
	getchar ();
}






