#include <stdio.h>
#include <math.h>

void printNhiphan(int x){
	if (x==0){
		return;
	}
	else {
		int r=x%2;
		printNhiphan (x/2);
		printf ("%d",r);
	}
}


int main (){
	int n,i;

	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<0);


printNhiphan(n);
return 0;
}



