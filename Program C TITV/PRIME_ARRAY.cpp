#include <stdio.h>
#include <math.h>

int thoadieukien(int x){
	return (x%2==0 && x%3==0);
}

int thoasonguyento( int z) {
	if (z<1)
	return 0;
	for (int y=2;y<=sqrt(z); y++){
		if(z%y==0)
		return 0;
	}
	return 1;
}


int main (){
	int n,i;
	int a[100];
	do {
	printf("\nnhap n");
	scanf("%d", &n);
	}while (n<1||n>100);

	for (i=0; i<n;i++){
		printf("\na[%d]", i);
		scanf("%d", &a[i]);
		
	}
	printf("cac so chia 3: ");
for (i=0; i<n;i++){
	if (thoadieukien(a[i]) )
		printf("%d", a[i]);
}
	printf("cac so nguyen to: ");
for (i=0; i<n;i++){
	if (thoasonguyento (a[i]) )
		printf("%d", a[i]);
}

return 0;
}



