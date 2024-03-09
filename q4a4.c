#include<stdio.h>
int add_2matrix(int row,int col){
	int i,j,num;
	int array1[row][col],array2[row][col],array3[row][col];
	printf("enter matrix 1\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter the value at (%d,%d)",i,j);
			scanf("%d",& array1[i][j]);
			
		}
	}
	printf("enter matrix 2\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter the value at (%d,%d)",i,j);
			scanf("%d",& array2[i][j]);
			
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			array3[i][j]=array1[j][j]+array2[j][j];
			
			
		}
	}
	printf("enter the number of matrix for print : ");
	scanf("%d",&num);
	switch(num){
		case 1:{
			printf("array 1\n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d",array1[i][j]);
				printf(" ");
		}
		printf("\n");
	}	
			break;
		}
		case 2:{
				printf("array 2\n");
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d",array2[i][j]);
					printf(" ");
		}
		printf("\n");
	}	
			
			break;
		}
		case 3:{
				printf("array 3\n");
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d",array3[i][j]);
					printf(" ");
		}
		printf("\n");
	}	
			break;
		}
	}
	
	
	
}

int main(){
	int row,col,num;
	printf("enter the row of matrix for addition : ");
	scanf("%d",&row);
	printf("enter the col of matrix for addition : ");
	scanf("%d",&col);
	add_2matrix(row,col);
	
	
}



















