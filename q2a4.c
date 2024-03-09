#include<stdio.h>
int main(){
	int i,j;
	int arr[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("enter the value at (%d,%d)",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			//condition is for primary diagonal matrix
			if(j==i){
				printf("%d",arr[i][j]);
				printf("  ");
			}
		
		}
	}
	printf("\n");
	for(i=3;i>=0;i--){
		for(j=3;j>=0;j--){
			//condition is for secondary diagonal matrix
			if(j==i){
				printf("%d",arr[i][j]);
				printf("  ");
			}
		}
	}
}
