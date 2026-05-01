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
			printf("Enter the value :");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");	
	}
	
	//sum of row
	
	int row,colum;
	int sum=0;
	printf("Enter row number :");
	scanf("%d",&row);
	
	if(row<n){
		printf("Element of row %d :",row);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					printf("%d",arr[i][j]);
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==row){
					sum+=arr[i][j];
				}
			}
		}
		printf("\nthe some of row %d :%d\n",row,sum);
	}else{
		printf("Invalid row number...");
	}
	
	//some of colum
	
	printf("\nEnter colum number :");
	scanf("%d",&colum);
	int sum2=0;
	
	if(colum<m){
		printf("Element of colum %d :",colum);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==colum){
					printf("%d",arr[i][j]);
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==colum){
					sum2+=arr[i][j];
				}
			}
		}
		printf("\nthe some of colum %d :%d",colum,sum2);
	}else{
		printf("Invalid colum number...");
	}
}