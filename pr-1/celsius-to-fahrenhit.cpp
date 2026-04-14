//Program To Convert Celsious to Fahrenhit

#include<stdio.h>

int main(){
	
	float c;
	printf("Enter The temperature in Celsius :");
	scanf("%f",&c);
	float f;
	f=(9/5*c)+32;
	printf("The Temperature in Fahrenhit is %0.2f",f);
	
}