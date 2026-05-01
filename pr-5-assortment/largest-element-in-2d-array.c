#include<stdio.h>

int main(){
	
	int n,m;
	printf("Enter the size of row :");
	scanf("%d",&n);
	printf("Enter the size of colum :");
	scanf("%d",&m);
	//insertion
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("enter the value :");
			scanf("%d",&arr[i][j]);
		}
	}
	//largest number loop
	int max=arr[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[0][0]<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("the largest element is :%d",max);
}