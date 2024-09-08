#include <stdio.h>
int main (){
	int a[10][10],n,i,s,j;
	scanf("%d", &n);
	printf(" n = %d \n", n);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	s=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			s+=a[i][j];
		}
	}
printf("s= %d", s);	
	return 0;
}












