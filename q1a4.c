#include<stdio.h>
int main(){
	int studentData[5][5];
	float arr_sum[5];
	float arr_per[5],per,sum=0;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j==0){
				printf("enter the id of student: ");
				scanf("%d",&studentData[i][j]);
			}
			else{
			printf("enter the marks of student %d :",studentData[i][0]);
			scanf("%d",&studentData[i][j];
			sum=sum+studentData[i][j];		
			}		
	}
		arr_sum[i]=sum;
		per=(sum/400)*100;
		arr_per[i]=per;
		per=0;
		sum=0;
	}
	printf("ID  MATHS ENGLISH PHYSICS URDU   SUM   PERCENTAGE\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",studentData[i][j]);
			printf("     ");	
		}
		printf("%.0f",arr_sum[i]);
		printf("     ");
		printf("%.2f%%",arr_per[i]);	
		printf("\n");
	}


}
