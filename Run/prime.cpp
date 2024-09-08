#include<stdio.h>
#include<math.h>
int isPrime (int number){
	int i, result;
	
	if (number==1||number==0){
		return 0;
	}
	for (i=2; i<=number; i++) {
		if (number % i == 0 ) {
			printf("%d", i)
			return 0;
		}
	}
	return 1;
}
//
int sumPrime (int number){
	int i, s;
	s=0;

		if (isPrime(i)==1){
			s+=1;
		}
	
	return s;
}
//
int main () {
	int i, number, sum;
	printf ("Enter the number:");
	 scanf ("%d", &number);
	sum = sumPrime (number);
	printf ("sum = %d\n", sum);
	getchar ();
	return 0;
}







