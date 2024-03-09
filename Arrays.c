#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int avg(){
//	int n1,n2,n3,n4,n5,avg;
//	avg= n1+n2+n3+n4+n5/5;
//	printf("The total average is = %d",avg);
//	
//}



int main(int argc, char *argv[]) {

//	int arr[5]={10,20,30,40,50};
//	int i; 
//	for(i=0;i<=4;i++){
//		printf("%d\n",arr[i]);
//	}

int arr[4][4], i ,j;
printf(" Enter elements = ");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		scanf("%d",&arr[i][j]);
	}
}
printf("\nThe elements of array are =");
for(i=0;i<4;i++){
	printf("\n");
	for(j=0;j<4;j++){
		printf("%d\t",arr[i][j]);
	}
}

printf("\nThe  left diagoanl of matrix are = ");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		if(i==j){
			printf("%d\t",arr[i][j]);	
		}
	}
}
//
printf("\nThe  right diagoanl of matrix are = ");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		if(i+j==3){
			printf("%d\t",arr[i][j]);	
		}
	}
}


//===============================
	
//int arr[5];
//int i,sum=0;
//
//for(i=0;i<5;i++){
//	scanf("%d",&arr[i]);
//}
//
//for(i=0;i<5;i++){
//	sum=sum+arr[i];
//}
//printf("The sum of marks is = %d",sum);	
//	int arr[5];
//	int i,sum=0; 
//	printf("Enter student marks\n");
//	for(i=0;i<5;i++){
//			//sum+=1;
//	//	printf("Std_%d=",sum+=1);
//		scanf("%d\n",&arr[i]);
//	}
//	printf("Your students marks are\n");
//	for(i=0;i<5;i++){	
//	printf("%d\n",arr[i]); 
//    }
//    avg(arr[i]); 






//int arr [5] = {10,20,30,40};
//int i,j,n=5;
//int new_value;
//for(i=0;i<=n-1;i++){
//	printf("%d\n",arr[i]);
//}
//printf("Enter number =");
//scanf("%d",&new_value);
//
//arr[n-1]=new_value;
//for(j=0;j<=n-1;j++){
// printf("%d\n",arr[j])//}





//	int i,j;
		printf("1 \n");
	for(i=1	;i<=4;i++){					
	printf("1");
			for(j=1;j< i;j++)
			{
			 printf("%d",i);
			}
		    printf("1");
		printf("\n");
		}


//QUESTION # 8:-
//int number, guess_num = 88, count=0;
//do{
//	printf("Enter any number = ");
//	scanf("%d",&number);
//	if(number > guess_num){
//		printf("\nYOUR NUMBER IS LOWER!\n");
//	}
//	else if(number < guess_num){
//		printf("\nYOUR NUMBER IS higher!\n");
//	}
//	else if(number == guess_num){
//		printf("\nCongrats! You guess in %d tries",count);
//	}
//	count++;
//}while(number != guess_num);


























// int a[3][3], b[3][3], sum[3][3], i, j;
//
//  printf("\nEnter elements of 1st matrix:\n");
//  for (i = 0; i < 3; ++i)
//    for (j = 0; j < 3; ++j) {
//      scanf("%d", &a[i][j]);
//    }
//
//  printf("Enter elements of 2nd matrix:\n");
//  for (i = 0; i < 3; ++i)
//    for (j = 0; j < 3; ++j) {
//      scanf("%d", &b[i][j]);
//    }
//
//    for (i = 0; i < 3; ++i)
//    for (j = 0; j < 3; ++j) {
//      sum[i][j] = a[i][j] + b[i][j];
//    }
//  printf("\nSum of two matrices: \n");
//  for (i = 0; i < 3; ++i){
//  		printf("\n");
//    for (j = 0; j < 3; ++j) {
//      printf("%d   ", sum[i][j]);
//    }
//}


//=====================================================


// Write a program to copy the contents of one array into another in the reverse order.

//int ar1[5] = { 10,20,30,40,50 }, ar2[5], i;
//
//	//copying elements
//	for (i = 4; i >= 0; i--)
//		ar2[i] = ar1[4 - i];
//
//	//displaying array
//	for (i = 0; i < 5; i++)
//		printf("%d ", ar2[i]);



//===================	TWO - DIMENSIONAL ARRAY ---------------------------------







































	return 0;
}
