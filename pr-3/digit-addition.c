#include<stdio.h>

int main(){
	
	int num,sum,last_num,first_num;
	printf("Enter Any Number :");
	scanf("%d",&num);
	last_num = num%10;
	while(num!=0){
		first_num = num%10;
		num/=10;
	}
	sum = first_num+last_num;
	printf("The sum of first and last number is :%d",sum);
}