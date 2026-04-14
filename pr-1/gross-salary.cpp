//programm To find Gross Salary

#include<stdio.h>

int main(){
	
	int salary;
	printf("Enter Your Salary :");
	scanf("%d",&salary);
	
	int hra;
	printf("Enter Your HRA :");
	scanf("%d",&hra);
	
	int da;
	printf("Enter Your DA :");
	scanf("%d",&da);
	
	int ta;
	printf("Enter Your TA :");
	scanf("%d",&ta);
	
	int gross_salary;
	gross_salary = salary + (salary * hra/100) + (salary * ta/100) + (salary * da/100) ;
	
	printf("Gross Salary is %d",gross_salary);	

	
	
	
}