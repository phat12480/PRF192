#include <stdio.h>
#include <math.h>
int main (){
	int n;
	int giaithua,i;
	


do {
	printf("\nnhap n");
	scanf("%d", &n);
}while (n<0);
printf("gia tri n la %d", n);

giaithua =1;

if (n==0||n==1){
	printf("    giai thua la 1");
}else {
	for( i=1;i<=n ;i++){
	giaithua = giaithua *i;
}
}
printf("    giaithua la %d", giaithua);



//while (i<=n){
//	giaithua=giaithua*i;
//	i++;

//do {
//	giaithua=giaithua*i;
//		i++;
//}while (i<=n);
//}
//printf("    giaithua la %d", giaithua);



return 0;
}



