#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		for(int a=1;a<=i;a++){
			printf("%d ",a);
		}
		for(int b=i;b<5;b++){
			printf("  ");
		}
		for(int c=i;c<5;c++){
			printf("  ");
		}
		for(int d=i;d>=1;d--){
			printf("%d ",d);
		}
		printf("\n");
	}
}