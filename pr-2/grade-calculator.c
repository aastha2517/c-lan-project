#include<stdio.h>

int main(){
	
	int score;
	char grade = 'F';
	
	printf("Enter Your Marks :");
	scanf("%d",&score);
	
//Step-1 Ternary Statement
	
	if (score>100){
		printf("Invalid Marks");
		
	}else{
		
		(score >=90)?
			grade= 'A'
		:
			(score>=80)?
				grade = 'B'
			:
				(score>=70)?
					grade = 'C'
				:
					(score>=60)?
						grade = 'D'
					:
						grade;
	printf("Your grade is %c\n",grade);
	
//Step-2 Switch Statement
	
	switch(grade){
		
		case 'A':
			printf("Excellent Work!");
			break;
		case 'B':
			printf("Well Done...");
			break;
		case 'C':
			printf("Good Job...");
			break;
		case 'D':
			printf("You passed , but you could do better");
			break;
		default:
			printf("Sorry,You falied...");
			break;
	}
	
//step-3 if-else Statement
	
	if(grade!='F'){
		
		printf("\nCongratulation! You are eligible for next level...");
		
	}else{
		
		printf("\nPlease try again next time...");
		
	}
						
	}
	
						
}