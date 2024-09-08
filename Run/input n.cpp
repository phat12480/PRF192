#include <stdio.h>
void printDivisors (int n) {
	int i;
	for (i=1; i<=n/2; i++) {
		if (n%i==0) printf ("%d, ", i);
	}
}

int main () {
	int n, i;
	printf ("\n input n="); scanf ("%d", &n);
	printDivisors (n);
	printf ("\n input n="); scanf ("%d", &n);
		printDivisors (n);
	printf ("\n input n="); scanf ("%d", &n);
	printDivisors (n);
	getchar ();
	getchar ();
}




