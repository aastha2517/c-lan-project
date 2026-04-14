//Programm To Find Third Angle Of Triangle

#include<stdio.h>
#define TRIANGLE_AREA 180

int main(){
	
	float a;
	printf("Enter the Value Of First Angle :");
	scanf("%f",&a);
	
	float b;
	printf("Enter the Value Of Second Angle :");
	scanf("%f",&b);
	
	float c;
	c = TRIANGLE_AREA-(a+b);
	
	printf("The Value Of Third Angle Is %0.2f",c);
	
	
}