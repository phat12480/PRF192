#include <stdio.h>
#include <math.h>

int Ktprime(int x){
	if(x==1||x==0)
		return 0;

	//for (int y=2; y<=x-1;y++){
	//for (int y=2; y<=x/2; y++){
	for (int y=2; y<=sqrt(x); y++){
		if(x%y==0)
		return 0;
	}
	return 1;
}


int main (){
	int n,i;

	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<0);

	int kt = Ktprime(n) ;
	if(kt==0){
		printf("   n not prime");
	}
	else {
		printf("  n is prime");
	}

return 0;
}



