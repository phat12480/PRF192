#include <stdio.h>
#include <stdlib.h>
//------------------------------
int isPrimes(int number){
	//Write your statements here
    //...
 	int i, result;
	int sum=0,count;

	
	do {
	for (i=2; i<=99; i++) {
		if (i%2!=0 && i%3!=0&&i%5!=0 ) {
		
			sum=sum+i;
			count++;
		}
	}
	} while (number==count);
	return sum;
    
    
    
    
	//End your statements 
}
//------------------------------
double average(int x){
	double avg;
	int i,value,sum,count;	
	//Write your statements here
    //Checking the prime is executed by isPrimes function
    //......
 
	avg=isPrimes(x) /count;
    
    
    
	//End your statements 
	return avg;
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int x;
  double r;
  printf("Enter x = "); scanf("%d",&x);   
  r = average(x);
  printf("\nOUTPUT:\n");
  printf("%.2lf",r);   
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================================== 
