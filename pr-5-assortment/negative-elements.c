#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the value :");
		scanf("%d",&arr[i]);
	}
	printf("Negative elements are :");
	for(int i=0;i<n;i++){
		if(arr[i]<0){
		printf("%d ",arr[i]);
		}
	}
}