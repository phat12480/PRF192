#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main (){

int n;
scanf("%d",&n);
char a[n];
for (int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
char s[n];
for (int i=0;i<n;i++){
	scanf("%d",&s[i]);
}
	for (int i=0;i<n;i++){
			if (a[i]==1||s[i]==1) printf("1");
			else printf("0");
	}
	
	

	
}






















