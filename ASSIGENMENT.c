#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void my()
//{
//	int r,c;
//	printf("Enter no of rows: ");
//	scanf("%d",&r);
//	printf("Enter no of columns: ");
//	scanf("%d",&c);
//	
//	int m[r][c];
//				  
//	int row,col;
//	
//	for(row=0; row<r; row++) // row 
//	{
//		for(col=0; col<c; col++) //column 
//		{
//			//diagonal
//			if(row==col)
//			{
//				m[row][col] =      0;
//			}
//			
//			//upper triangle
//			if(row<col)
//			{
//				m[row][col] =      1;
//			}
//			
//			//lower triangle
//			if(row>col)
//			{
//				m[row][col] =  -1;
//			}
//		}
//	}
//	
//	for(row=0; row<r; row++)
//	{
//	
//		for(col=0; col<c; col++)
//		{
//			printf("%d " , m[row][col]);
//		}
//		
//		printf(" \n");
//	}
//	
//}	

int main(int argc, char *argv[]) {


// 	question#1:-


//	int marks[5][4], i ,j ,sum=0;
//	int arr[5][2];
//	float per;
//	for(i=0;i<5;i++){
//		printf("Enter marks of Student %d:\n",i+1); 
//		for(j=0;j<4;j++)                  
//		{
//		  scanf("%d",&marks[i][j]);	     		    
//		} 
//	 } 
//
//	 for(i=0;i<5;i++){
//		printf("\n\nResult of Student %d:\n",i+1);  
//		for(j=0;j<4;j++)
//		{
//		   sum += marks[i][j];        	
//		}			
//		per = sum * 100.0 / 400.0;   
//		printf("\n\nTotal Marks %d\n",sum);
//		printf("\n\nPercentage is %.2f\n",per);
//		sum=0;
//		per=0;
//	 }  
//	 printf("------------------------------THH END------------------------- ");
//	//=========-====================================================== 
//	
//	 printf("no. sum");
//
//	 for(i=0;i<5;i++){
//	 	printf("\n");
//	 	for(j=0;j<4;j++){
//	 		printf("%d ",marks[i][j]);
//	 		
//		 }
//	 }
//	
//	 	 for(i=0;i<5;i++){
//	 	for(j=0;j<4;j++){
////	 		printf("%d ",arr[i][j]);
//			 arr[i][j] = sum;
//	 		
//		 }
//	 }
//	 
//	 	 for(i=0;i<5;i++){
//	 	for(j=0;j<4;j++){
//	 		printf("%d ",arr[i][j]);
//	 		
//		 }
//	 }

///=================================================================================

//	question # 2:-


//int arr[4][4], i ,j;
//
//printf(" Enter elements = ");
//
//for(i=0;i<4;i++){
//	for(j=0;j<4;j++){
//		scanf("%d",&arr[i][j]);
//	}
//}
//printf("\nThe elements of array are =");
//for(i=0;i<4;i++){
//	printf("\n");
//	for(j=0;j<4;j++){
//		printf("%d\t",arr[i][j]);
//	}
//}
//
//printf("\nThe  left diagoanl of matrix are = ");
//for(i=0;i<4;i++){
//	for(j=0;j<4;j++){
//		if(i==j){
//			printf("%d\t",arr[i][j]);	
//		}
//	}
//}
//
//printf("\nThe  right diagoanl of matrix are = ");
//for(i=0;i<4;i++){
//	for(j=0;j<4;j++){
//		if(i+j==3){
//			printf("%d\t",arr[i][j]);	
//		}
//	}
//}

///=================================================================================

//QUESTION # 9:-

	int i,j;
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




















///=================================================================================
//QUESTION # 8:-
//QUESTION # 8:-
//int guess_num, number = 88, count=0;
//do{
//	printf("Enter any number = ");
//	scanf("%d",&guess_num);
//	if(guess_num > number){
//		printf("\nYOUR NUMBER IS LOWER!\n");
//		}
//	else if(guess_num < number){
//		printf("\nYOUR NUMBER IS higher!\n");
//	}
//	else if(guess_num == number){
//		printf("\nCongrats! You guess in %d tries",count);
//	}
//	count++;
//}while(guess_num != number);










///=================================================================================










///=================================================================================





///=================================================================================


















///=================================================================================
//
//
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



///=================================================================================
///=================================================================================
///=================================================================================
///=================================================================================
		
//question#1

//int marks[5][4]; // 5 student marks of 4 subjects 
//	int i,j,sum=0;
//	float per;
//	
//	for(i=0;i<5;i++) //
//	{
//		printf("\nEnter marks of Student %d:\n",i+1); //i=0 then print 1 students marks i+1=> 0+1=> 1
//		
//		for(j=0;j<4;j++)                  // marks loop 
//		{
//		  scanf("%d",&marks[i][j]);	     //inputs of marks
//				    
//		}
//	    
//	 } 
//	 
//	 
//	 for(i=0;i<5;i++)
//	{
//		printf("\nResult of Student %d",i+1);   //result of 1 by 1 student  
//		for(j=0;j<4;j++)
//		{
//		
//		   sum += marks[i][j];        	
//		} 
//		per = sum * 100.0 / 400.0;   // percentage of  student 1 by 1 
//		printf("\nTotal Marks %d",sum);// total percentage of all students
//		printf("\nPercentage is %.2f",per);
//		sum=0;
//		per=0;
//		
//	 } 	

///=================================================================================

//QUESTION # 2:-

//void my();
//
//int main()
//{
//	my();
//	
//	return 0;
//}
//
//void my()
//{
//	int r,c;
//	printf("Enter no of rows: ");
//	scanf("%d",&r);
//	printf("Enter no of columns: ");
//	scanf("%d",&c);
//	
//	int m[r][c];
//				  
//	int row,col;
//	
//	for(row=0; row<r; row++) // row 
//	{
//		for(col=0; col<c; col++) //column 
//		{
//			//diagonal
//			if(row==col)
//			{
//				m[row][col] =      0;
//			}
//			
//			//upper triangle
//			if(row<col)
//			{
//				m[row][col] =      1;
//			}
//			
//			//lower triangle
//			if(row>col)
//			{
//				m[row][col] =  -1;
//			}
//		}
//	}
//	
//	for(row=0; row<r; row++)
//	{
//	
//		for(col=0; col<c; col++)
//		{
//			printf("%d " , m[row][col]);
//		}
//		
//		printf(" \n");
//	}
//	
//}	

///=================================================================================


//"QUESTION # 3 :-

//	int expense[5][7];
//	int i,j,week=0,Total=0,day;
//	//week 1
//	for(i=0;i<5;i++)
//	{
//		printf("\nEnter Expense of Student %d:\n",i+1);
//		
//		for(j=0;j<7;j++)
//		{
//			printf("day%d: ",j+1);
//		   scanf("%d",&expense[i][j]);	 // input of expensive 
//		}
//		
//	 } 
//	 
//	 // week 2 
//	 for(i=0;i<5;i++)      //for Student 
//	{
//		
//		for(j=0;j<7;j++)    // weekly
//		{
//		
//		   week += expense[i][j];
//		   Total += expense[i][j];	
//		   
//		}
//		printf("\nExpense of Student %d of week",i+1); 
//		printf(" %d",week);
//	
//		week=0;
//	
//	 } 
//	 
//	 printf("\nTotal Expense of whole Students is %d",Total); // total expense of ALL student of 2 weeks 
//	 
//	 
//	 // All students whole Day expensives 
//	 for(i=0;i<7;i++) 
//	{
//		printf("\nExpense of Day %d of whole Students",i+1);
//		for(j=0;j<5;j++)
//		{
//		
//		   day += expense[j][i];
//		   
//		}
//		printf(" %d",day);
//         day = 0;
//	
//	 }  


///=================================================================================

//QUESTION # 4:-

// int arr1[100];
//    int arr2[100];
//    int i,n1,n2, sum1=0,sum2=0,result;
//     // 1st Array 
//    printf("Enter size of the array1: ");
//    scanf("%d", &n1);
//
//    
//    printf("Enter %d elements in the array: ", n1);
//    for(i=0; i<n1; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//
//    
//    for(i=0; i<n1; i++)
//    {
//        sum1 = sum1 + arr1[i];
//    }
//
//
//    printf("Sum of all elements of array = %d", sum1);
//    
//    printf("\n");
//    
//    printf("Enter size of the array2: ");
//    scanf("%d", &n2);
//   
//   
//   // 2nd array 
//   
//    printf("Enter %d elements in the array: ", n1);
//    for(i=0; i<n2; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//
//    for(i=0; i<n2; i++)
//    {
//        sum2 = sum2 + arr2[i];
//    }
//
//
//    printf("Sum of all elements of array = %d", sum2);
//    
//	printf("\n");
//	// sum of both arrays elements 
//	
//    result=sum1+sum2;
//    printf("The sum of arrays=%d",result);

///=================================================================================

//QUESTION # 5:-

//int cube( int n );
//
//int main (int argc, char *argv[]){
//
//  int n, i, j, k, l, raman = 0, order = 0;
//
//  printf("\nEnter a value for n:");
//
//  scanf("%d", &n);
//
//  /*printf("Ramanujan    First    Second    First     Second    Order\n");
//  printf("   Number     Cube      Cube     Root       Root         \n");
//  printf("_________    _____    ______    _____     ______    _____\n");*/
//
//  while (raman <= n) {
//
//    for(i = 1; i <= n; i++) {
//
//      for(j = 1; j <= n; j++) {
//
//        for(k = 1; k <= n; k++) {
//
//          for(l = 1; l <= n; l++) {
//
//            if(cube(i) + cube(j) == cube(k) + cube(l) && cube(i) + cube(j) != raman) 
//			   {
//
//               raman = cube(i) + cube(j);
//               order = order + 1;
//
//               printf("%d      %d     %d     %d     %d     %d\n", raman, cube(i), cube(j), i, j, order);
//               printf("           %d     %d      %d      %d", cube(k), cube(l), k, l);
//               printf("\n\n\n");
//
//               i = n+1;
//               j = n+1;
//               k = n+1;
//               l = n+1;
//			   }
//          }
//        }
//      }
//    }
//  }
//  return (0);
//}
//
//int cube( int n ) {
//
//    return (n * n * n);
//
//}

///=================================================================================

//QUESTION # 7:-
	 
//	 int i,temp;
//     int hot=0,cold=0,pleasent=0,sum=0;
//	for(i=1;i<=14;i++)
//	{
//		printf("Enter tempurature of day%d ",i);
//		scanf("%d",&temp);
//		if(temp >= 30)
//		{
//			hot++;
//		}
//		else if(temp > 20 && temp < 30)
//		{
//			pleasent++;
//		}
//		
//		else if(temp  < 20)
//		{
//			cold++;
//		}
//		sum += temp;
//	}
//	
//	float avg = sum / 14.0;
//	printf("\nAverage tempurature is %.2f",avg);
//	printf("\nHot days in two weeks is %d",hot);
//	printf("\nCold days in two weeks is %d",cold);
//	printf("\nPleasent days in two weeks is %d",pleasent);
//}

///=================================================================================

//QUESTION # 8:-

//main()
//{
//	guess();
//}
//
//int guess()
//{
//	int rnd = 88;
//int num;
//	do
//	{
//			rnd = rand()%100+1;
//	       printf("\n%d",rnd);		
//			
//	printf("\nEnter any number ");
//	scanf("%d",&num);
//	if(num > 0)
//	{
//			if(num > rnd)
//	{
//		printf("\nYou pass Long number");
//	}
//	else if(num < rnd)
//	{
//		printf("\nYou pass Short number");
//	}
//	else if(num == rnd)
//	{
//		printf("\n Congratulation:");
//	}	
//	}
//
//	
//	else
//	{
//		break;
//	}
//		
//	}
//	while(num!=rnd);
//	
//	
//}	 

///=================================================================================

//QUESTION # 9:-

//	int i,j,n;
//
//	printf("please enter size :");
//	scanf("%d",&n);
//	
//		printf("1 \n");
//	for(i=0;i<n;i++)
//{					
//
//	printf("1");
//
//
//			for(j=0;j<i;j++)
//			{
//				
//
//			 printf("%d",i);
//			}
//								printf("1");
//
//		printf("\n");
//
//
//		}


///=================================================================================

//QUESTION # 10:-

//int n, r = 0, t;
//
//  printf("Enter a number to check if it's a palindrome or not\n");
//  scanf("%d", &n);
//
//  t = n;
//
//  while (t != 0)
//  {
//    r = r * 10;
//    r = r + t%10;
//    t = t/10;
//  }
//
//  if (n == r)
//    printf("%d is a palindrome number.\n", n);
//  else
//    printf("%d isn't a palindrome number.\n", n);

///=================================================================================

//QUESTION # 11:-

//void printSolution(int board[4][4]) 
//{ 
//    int k = 1 , i ,j ; 
//    printf("%d-\n",k++); 
//    for (i = 0; i < 4; i++) 
//    { 
//        for (j = 0; j < 4; j++) 
//            printf(" %d ", board[i][j]); 
//        printf("\n"); 
//    } 
//    printf("\n"); 
//} 
//bool  isSafe(void);
//boolean isSafe(int board[4][4], int row, int col) 
//{ 
//    int i, j; 
//  
//    /* Check this row on left side */
//    for (i = 0; i < col; i++)
//	{
//    	if (board[row][i]){
//    		return false;
//		}
//	}
//  for (i=row, j=col; i>=0 && j>=0; i--, j--)
//  {
//  	
//        if (board[i][j]) {
//        	return false;
//        }
//  } 
//  for (i=row, j=col; j>=0 && i<N; i++, j--)
//  {
//  	if (board[i][j]) 
//	  {
//  		return false;
//  	  }
//                
//  }
//return true;
//
//bool solveNQUtil(int board[N][N], int col)
//{
//    if (col == N) 
//    { 
//        printSolution(board); 
//        return true; 
//    }  
//    bool res = false; 
//    for (int i = 0; i < N; i++) 
//    {
//    	 if ( isSafe(board, i, col) )
//		 {
//		   board[i][col] = 1;
//		   res = solveNQUtil(board, col + 1) || res;
//		   board[i][col] = 0;
//	     }
//	
//	}
//	return res;
//}
//void solveNQ() 
//{ 
//    int board[N][N]; 
//    memset(board, 0, sizeof(board)); 
//  
//    if (solveNQUtil(board, 0) == false) 
//    { 
//        printf("Solution does not exist"); 
//        return ; 
//    } 
//  
//    return ; 
//}
//int main() 
//{ 
//    solveNQ(); 
//

///=================================================================================

//QUESTION # 12:-

//void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) // variables
//{ 
//    if (n == 1) 
//    { 
//        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);   //this is spaces for store the disk  
//        return; 
//    } 
//    
//    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);  // spacess
//    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); // position  large are  store in last 
//	 
//    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);  // final result 
//} 
//  
//int main() 
//{ 
//    int n = 4; // Number of disks 
//    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 

///=================================================================================

//QUESTION # 13:-

//int n, i;
//    float num[100], sum = 0.0, avg ,median;
//
//    printf("Enter the numbers of elements: ");
//    scanf("%d", &n);
//
//    while (n > 100 || n < 1) {
//        printf("Error! number should in range of (1 to 100).\n");
//        printf("Enter the number again: ");
//        scanf("%d", &n);
//    }
//
//    for (i = 0; i < n; ++i) {
//        printf("%d. Enter number: ", i + 1);
//        scanf("%f", &num[i]);
//        sum += num[i];
//    }
//
//    avg = sum / n;
//    printf("Average = %.2f", avg);
//    
//    printf("\n");
//    
//    if(n%2==0){
//    	median = (n+1)/2 ;
//    }
//    else{
//    	median = (n/2)+(n/2)+1;
//    	median = median/2;
//    	
//    }
//    printf("median position is  = %.2f", median);

///=================================================================================

//QUESTION # 14:-

//int number, positive = 0, negative = 0, zero = 0;
//    char choice;
//
//    do
//    {
//        printf("Enter a number :");
//        scanf("%d", &number);
//
//        if (number > 0)
//        {
//            positive++;
//        }
//        else if (number < 0)
//        {
//            negative++;
//        }
//        else
//        {
//            zero++;
//        }
//        printf("Do you want to Continue(y/n)? ");
//		scanf("%c", &choice);
//        
//
//    }while (choice == 'y' || choice == 'Y');
//
//    
//	
//	
//	
//
//    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", positive, negative, zero);
//  

	return 0;
}
