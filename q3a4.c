
#include<stdio.h>
int main(){
	int i,j;
	int std_exp[5][8];
	int totlExp_std[5],sum=0,sum_week=0,per_day[7],weekly_exp=0;
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			if(j==0){
				
				printf("enter the student count : ");
				scanf("%d",&std_exp[i][j]);
			}
			else{
				
				printf("enter the day # %d expense of std %d: ",j,std_exp[i][0]);
				scanf("%d",&std_exp[i][j]);
				sum=sum+std_exp[i][j];
			}
			
			
		}
		
		weekly_exp=weekly_exp+sum;
		
		totlExp_std[i]=sum;
		
		sum=0;
		
	}
	
	for(i=1;i<8;i++){
		for(j=0;j<5;j++){
			sum_week=sum_week+std_exp[j][i];
			
			
			
		}
		per_day[i]=sum_week;
		sum_week=0;
		
	}
	printf("std_no                Expense              total expense\n");
	printf("=== day1 day2 day3 day4 day5 day6 day7  =====\n");
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			printf("%d",std_exp[i][j]);
			printf("    ");
		
		}
		printf("%d",totlExp_std[i]);
		
		printf("\n");
		
	}
	printf("\n");
	printf("per  ");
	for(i=1;i<8;i++){
	
		printf("%d",per_day[i]);
		printf("    ");
	}
	printf("\n");
	printf("weekly expense                                     %d",weekly_exp);
	
	
}
