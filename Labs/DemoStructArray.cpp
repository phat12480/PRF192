#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 50

struct Employee{
	char code[10];
	char name[30];
	double salary;
};

/* Add a new employee, inputted data are local variables */
void addList(Employee ds[] , int n){  	
   int i;  
   for(i=0;i<n;i++){   
     _flushall(); 
     printf("Enter employee no :%d\n",i+1);	 
  	 printf("Code:");
	 gets(ds[i].code);	 
	 printf("Name:");
	 gets(ds[i].name);
	 printf("Salary:");
	 scanf("%lf",&ds[i].salary); 
   }
}
/* Print  employees list */
void printList(Employee ds[], int n){
	 int i=0;	
	 for(i=0;i<n;i++){
	 	printf("Employee : %d\n",i+1);
	 	printf("  Code:%s\n",ds[i].code);
	 	printf("  Name:%s\n",ds[i].name);	 
	 	printf("  Salary:%0.2lf\n",ds[i].salary);	 	
	 }
}
//find a employee by Code
int findEmployeeByCode(Employee ds[],
						char code[], int n){     
	 int i,flag=-1;	 
	 for(i=0;i<n && flag == -1 ;i++){
	     if(strcmp(code,ds[i].code)==0){
	     	flag = i;
	     }
	 }//end for
	 return flag;
}
//swap employee
void swapEmployee(Employee* a, Employee* b){
	Employee t = *a;
	*a = *b;
	*b = t;
}
//sort via salary
void sortBySalaryDesc(Employee ds[],int n){
 	 int i,j;	 
	 for(i=0;i<n;i++){
	 	for(j=i+1;j<n;j++)
	     if(ds[i].salary < ds[j].salary){	     	 	
			 swapEmployee(&ds[i],&ds[j]);	     	 
	     }
	 }
}
//main function
main(){   
   Employee ds[MAXN];
   char code[10];
   int n =0,index;  
   //Enter employee
   printf("Nhap n = ");
   scanf("%d",&n);
   //nhap n nhan vien
   addList(ds,n);   
   //xoa man hinh 
   system("cls");
   printf("----View Employee List----\n");
   printList(ds,n);   
   _flushall(); 
   printf("Enter code to find:");
   gets(code);
   //find 
   index = findEmployeeByCode(ds,code,n);
   if(index > -1) {
   	  printf("Tim thay tai vi tri : %d\n",index+1);
   }
   else{
   	  printf("Khong tim thay.\n");
   }
   //Sort
   sortBySalaryDesc(ds,n);
   printf("----View Employee List After Sorted----\n");
   printList(ds,n);     
}
