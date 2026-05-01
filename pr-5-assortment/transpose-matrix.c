#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	//insertion
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("enter the value :");
			scanf("%d",&arr[i][j]);
		}	
	}
	//transpose loop
	int arr2[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				arr2[i][j]=arr[i][j];
			}else{
				arr2[j][i]=arr[i][j];
			}
		}
	}
	//iteration
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr2[i][j]);
		}
			printf("\n");
	}

}