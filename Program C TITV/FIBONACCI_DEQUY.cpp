#include <stdio.h>
int fibonacci(int x){
	if (x==0){
		return 0;
	}
	else if (x==1){
		return 1;
	}
	else if (x==2){
		return 1;
	}
	else {
		return fibonacci(x-1)+fibonacci(x-2);  
	}
}


int main (){
	int n,i;
	int sum =0;
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<0);

printf("\nn la %d", n);

 printf("    fibonacci la %d ", fibonacci(n) );

return 0;
}

