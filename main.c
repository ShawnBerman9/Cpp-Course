#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void isPalindrome(char* string)
{
    char *ptr, *rev;
  
    ptr = string;
  
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
  
    for (rev = string; ptr >= rev; ) {
        if (*ptr == *rev) {
            --ptr;
            rev++;
        }
        else
            break;
    }
  
    if (rev > ptr)
        printf("%s is Palindrome",string);
    else
        printf("%s is not a Palindrome",string);
}
//====================================================================

void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

//===================================================================
int data(int n){
//int k = 0;
if(n <0){
n = n * 3;
return n;}
else{
n = n + 3;
if(n % 2 == 1)
n = n + n % 10;
return n;}
}

//===================================================================
int aa(int a){
	printf("%d\n",a);
	return (a+6);
}
int bb(int b){
	printf("%d\n",b);
	b = aa(1);
	return (b+2);
}
//===================================================================

int calc(int a, int b){
	a=a*10;
	b=b+10;
}

void funn(int *ptr){
	*ptr = 30;
}
//====================================================================================================

int main()
{
//int a;
//char *x;
//x = (char *) &a;
//a = 512;
//x[0] = 1;
//x[0] = 2;
//printf("%d\n",a);

	
//int y =20;
//funn(&y);
//printf("%d",y);
//
//int a=5;
//int *aptr;
//aptr = &a; 
//printf("%d\n",aptr);
//printf("%d\n",&a);
//a++;
//printf("%d\n",a);
//printf("%d\n",*aptr);
//a+5-3;
//printf("%d\n",a); 
//a=a+5-3;
//printf("%d\n",a);



//int a = 10;
//
//printf("%d\n",a);
//printf("%d\n",a++);
//printf("%d\n",++a);



//int i,j,k;
//for(i=0;i<3;i++){
//	for(j=0;j<3;j++){
//		printf("%d\n",i+j);
//	}
//}


//int count = 2;
//do{
//	printf("%d\n",count);
//	count += 2;
//}while(count <100);



//int a=6, b=10;
//calc(a,b);
//	printf("%d,%d",a,b);



	
//int c;
//c = bb(6);
//printf("%d\n",c);
	
//	int i=5, j=7, k=4 ,m=-2;
//	printf("%d\n",i==5);  		//1
//	printf("%d\n",j!=3);		//1
//	printf("%d\n",i>=5&&j<4);	//0
//	printf("%d",!(j-m));  		//0


	//int r; //= 29 % 2 % 5 + 34 % 3 ;
//	r = data(18);
//	printf("%d",r);



//int x;
//scanf("%d",&x);
//switch(x){
//	case 4:
//	case 2: x=x-2;
//	break;
//	case 5:
//	case 0: x=x+4;
//	break;
//	case 3:
//	case 1:x=x+3;
//	break;
//	default: x=x+5;	
//}
//printf("%d\n",x);




//Finding Min and Max Number
//int nums [10]= {12,15,9,44,55,47,87,1,2,59};
//int min = nums[0];
//int max = nums[0];
//int i;
//for(i = 0; i <10; ++i) {
//if( nums[i] > max ) {
//max = nums[i];
//}
//if(nums[i] < min) {
//min = nums[i];
//}
//}
//printf("min: %d",min);
//printf("max: %d",max);


//power wala function

// int num1, num2;
//
//  printf("Enter base and power: ");
//  scanf("%d %d",&num1, &num2);
//
//  printf("Result = %.2f",pow(num1, num2));


//
//   int i = 0;
//   i = i++ + ++i;
//   printf("%d\n", i); // 3
//   i = 1;
//   i = (i++);
//   printf("%d\n", i); // 2 Should be 1, no ?
//   int u = 0;
//   u = u++ + ++u;
//   printf("%d\n", u); // 1
//   u = 1;
//   u = (u++);
//   printf("%d\n", u); // 2 Should also be one, no ?
//   int v = 0;
//   v = v++ + ++v;
//   printf("%d\n", v); // 3 (Should be the same as u ?)
//   int w = 0;
//   printf("%d %d\n", ++w, w); // shouldn't this print 1 1
//   int x[2] = { 5, 8 }, y = 0;
//   x[y] = y ++;
//   printf("%d %d\n", x[0], x[1]); // shouldn't this print 0 8? or 5 0?

int main()
{
//    int Matrix[ROW][COL] = {
//        { 3, 2, 1 },
//        { 5, 4, 6 },
//        { 9, 8, 7 }
//    };
//
//    int i, j, k, temp;
//    printf("Matrix:\n");
//    for (i = 0; i < ROW; ++i) {
//        for (j = 0; j < COL; ++j)
//            printf(" %d", Matrix[i][j]);
//        printf("\n");
//    }
//    for (i = 0; i < ROW; ++i) {
//        for (j = 0; j < COL; ++j) {
//            for (k = (j + 1); k < COL; ++k) {
//                if (Matrix[i][j] > Matrix[i][k]) {
//                    temp = Matrix[i][j];
//                    Matrix[i][j] = Matrix[i][k];
//                    Matrix[i][k] = temp;
//                }
//            }
//        }
//    }
//    printf("Matrix after sorting row elements:\n");
//    for (i = 0; i < ROW; ++i) {
//        for (j = 0; j < COL; ++j)
//            printf(" %d", Matrix[i][j]);
//        printf("\n");
//    }





// ========================   " sample paper " ================================

// ======================Q2:PALINDROM STRING   =====================
    char str[1000];
    printf("Enter the string ");
    scanf("%s",&str);  
    isPalindrome(str);
  
  
}
// ==================Q3: 2ND LARGEST AND 2ND MINIMUM ======================  

//    int n, temp, i, j;
//    printf("Enter the number of elements:");
//    scanf("%d",&n);
//    printf("Enter the array elements :");
//    int a[n];                    //Array Declaration
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<n;i++)         //Sorting Array
//    {
//        for(j=i+1; j<n ;j++)
//        {
//            if(a[i]<a[j])
//            {
//                temp=a[i];
//                a[i]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
//    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
//    printf("\n");
//    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    

//=======================Q4: SWAPING NUMBER USING POINTER =======================

//    int num1,num2;
//    printf("Enter value of num1: ");
//    scanf("%d",&num1);
//    printf("Enter value of num2: ");
//    scanf("%d",&num2);
//    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
//    swap(&num1,&num2);
//    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);  

//==================================Q5:N-SQUARE PATTERN ===========================================

	int i, j, n, nn;
	int arr[n];
	printf("Enter the limit of arr");
	scanf("%d",&n);
	printf("Enter %d elements of array:",n);
	for(i=1;i<=n;i++){
			scanf("%d",&arr[i]);
	}
//	printf("Enter the limit of the pattern:");
//	scanf("%d",&nn);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				printf("%d",arr[i]);
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}

//============= method # 2 ========================

//	int i, j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=5;j++){
//			if(i==j){
//				printf("%d",i*i);
//			}
//			else{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//====================================================================================
  
  
  
  
  
  
  
  
  
  
//Q7 Write a program to enter numbers till the user wants. At the end it should display the
// count of positive, negative and zeros entered.  
  
//    int i, num, count_p=0, count_n=0, count_z=0;
//    int arr[100];
//    //size of array
//    printf("Enter Numbers: ");
//    scanf("%d", &num);
//
//    //take input from user for "num" numbers
//
//    for(i=0;i<num;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    //count the numbers
//    for(i=0;i<num;i++)
//    {
//        //check for positive numbers
//        if(arr[i]>0)
//        {
//            count_p++;
//        }
//        else if(arr[i]<0)
//        {
//            count_n++;
//        }
//        else if(arr[i]==0)
//        {
//            count_z++;
//        }
//        else
//        {
//            printf("Wrong Entry");
//            break;
//        }
//    }
//    printf("Positive Numbers: %d\n", count_p);
//    printf("Negative Numbers: %d\n", count_n);
//    printf("Zero Numbers: %d\n", count_z);  
  


//=======================================================================
//https://www.includehelp.com/c-programs/c-programs-two-dimensional-array-or-matrix-programs.aspx

//	here we get some important question
//	https://www.geeksforgeeks.org/c-pointers-question-5/?ref=lbp

//QUESTION:  Get as input 10 strings by the user,Sort the strings using bubble sort in ascending order,Display the sorted strings
  
/* 	Q1: Twenty-five numbers are entered from the keyboard into an
		 array. The number to be searched is entered through the
	     keyboard by the user. Write a program to find if the number to
		 be searched is present in the array and if it is present, display
		 the number of times it appears in the array.   */

/*  Q2: Twenty-five numbers are entered from the keyboard into an
array. Write a program to find out how many of them are
positive, how many are negative, how many are even and how
many odd. */

/*	Q3: Implement the Selection Sort, Bubble Sort and Insertion sort
algorithms on a set of 25 numbers. (Refer Figure 8.11 for the
logic of the algorithms)
- Selection sort
- Bubble Sort
- Insertion Sort */  

/*  (b):  Write a program to pick up the largest number from any 5 row
by 5 column matrix.

(c):  Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements
of each row with the elements of the corresponding column.  */  
  
/*Write a function to find the norm of a matrix. The norm is
defined as the square root of the sum of squares of all
elements in the matrix.*/  
 
 
//Given an array p[5], write a function to shift it circularly left
//by two positions. Thus, if p[0] = 15, p[1]= 30, p[2] = 28,
//p[3]= 19 and p[4] = 61 then after the shift p[0] = 28, p[1] =
//19, p[2] = 61, p[3] = 15 and p[4] = 30. Call this function for a
//(4 x 5 ) matrix and get its rows left shifted. 
  
 
//A 6 x 6 matrix is entered through the keyboard and stored in a
//2-dimensional array mat[7][7]. Write a program to obtain the
//Determinant values of this matrix. 
 
 
/*The area of a triangle can be computed by the sine law when 2
sides of the triangle and the angle between them are known.
Area = (1 / 2 ) ab sin ( angle )
Given the following 6 triangular pieces of land, write a
program to find their area and determine which is largest,
Plot No. a b angle
1 137.4 80.9 0.78
2 155.2 92.62 0.89
3 149.3 97.93 1.35 
4 160.0 100.25 9.00
5 155.6 68.95 1.25
6 149.7 120.0 1.75 */


//For the following set of n data points (x, y), compute the
//correlation coefficient r, given by
//pg#342
//? ? ?
//?
//
//?
//? ?
//- -
//
//- =
//[ ( ) ][ ( ) ] 2 2 2 2 n x x n y y
//xy x y
//r
//
//x y
//34.22 102.43
//39.87 100.93
//41.85 97.43
//43.23 97.81
//40.06 98.32
//53.29 98.32
//53.29 100.07
//54.14 97.08
//49.12 91.59
//40.71 94.85
//55.15 94.65


//The X and Y coordinates of 10 different points are entered
//through the keyboard. Write a program to find the distance of
//last point from the first point (sum of distance between
//consecutive points).

//Write a program that converts all lowercase characters in a
//given string to its equivalent uppercase character.

//Write a program that extracts part of the given string from the
//specified position. For example, if the sting is "Working with
//strings is fun", then if from position 4, 4 characters are to be
//extracted then the program should return string as "king".
//Moreover, if the position from where the string is to be
//extracted is given and the number of characters to be
//extracted is 0 then the program should extract entire string
//from the specified position.


//Write a program that converts a string like "124" to an integer
//124.

//sum of above diagonal and sum of bleow diagoanl

//int i,j,m,n,d1=0,d2=0,a[5][5];
//printf("How many rows and columns:");
//scanf("%d%d",&m,&n);
//printf("Enter matrix elements:\n");
//for(i=0;i<m;++i)
//for(j=0;j<n;++j)
//{
//scanf("%d",&a[i][j]);
//if(j>i)
//d1+=a[i][j];
//else
//if(i>j)
//d2+=a[i][j];
//}
//printf(\n"Sum of elements above the diagonal=%d\n",d1);
//printf("Sum of elements below the diagonal=%d",d2);

// int n, i, j, k, m = 0;
//    printf(" Input number or rows: ");
//    scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        if (i == 1) {
//            for (j = 1; j <= i; j++) {
//                printf("%d",m);
//            }
//            for (k = 1; k <= n - i; k++) {
//            		printf("%d",k);
//            }
//        }
//        else {
//            for (k = i - 1; k >= 1; k--) {
//                printf("%d",k);
//            }
//            printf("%d",k);
//            for (j = 1; j <= n - i; j++) {
//                printf("%d",j);
//            }
//        }
//        printf("\n");
//    }
//     printf("\n");
//}

//int i,j, arr[100],n,temp;
//printf("Enter the number of elements :");
//scanf("%d",&n);
//for(i=0;i<=n;i++){
//		scanf("%d",&arr[i]);
//}
//for(i=0;i<n-1;i++){
//	for(j=0;j<n-1;j++){
//		if(arr[j]>arr[j+1]){
//			temp = arr[j];
//			arr[j] = arr [j+1];
//			arr[j+1] = temp;
//		}
//	}
//}
//printf("After th bobble sortig your arry become :");
//for(i=0;i<=n;i++){
//		printf("%d",&arr[i]);
//}

return 0;
}
