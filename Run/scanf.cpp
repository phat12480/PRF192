#include <stdio.h>
#include <stdlib.h>
int getValue (int min, int max){
	int value;
	int keeptrying=1,rc;
	char after;
	
	do{
		printf("enter a whole number \n" "in the range [%d,%d]:", min,max);
		rc=scanf("%d%c", &value, &after);
		if (rc==0){
			printf("**No input accepted!**\n\n");
		//	clear();
			
		}
		else if (after!= '\n'){
			printf("**trailing characters !**\n\n");
			//clear();
			
		}
		else if (value <min || value >max){
			printf("**out of range! **\n\n");
		}
		else
			keeptrying =0;
	}
		while (keeptrying ==1);
	
	
	
	
	
	return value;
}

int Square (int n){
	return n*n;
}

main (){
	int s,n;
	n=getValue(2,10);
	s=Square(n);  
	printf("%d^2 = %d \n" ,n,s);
	
	system("pause");
	
}












