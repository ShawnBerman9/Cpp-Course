#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/   SIR CLASS EXERICE:-
//    ---------------

// Q.1:-

//int add (int a,int b){
//    int c;
//	c=a+b;
//	return c;
//	}
//
//int sub (int a,int b){
//    int c;
//	c=a-b;
//	return c;
//	}
//	
//int mul(int a, int b){
//	int c;
//	c=a*b;
//	return c;
//}
//
//int Div(int a, int b){
//	int c;
//	c=a/b;
//	return c;
//}
//
//int mod(int a, int b){
//	int c;
//	c=a%b;
//	return c;
//}
//
//int main(int argc, char *argv[]) {
//  int num1 , num2 ,option , c;
//  printf("Enter two numbers = ");
//  scanf("%d%d",&num1,&num2);
//  printf("\n Press 1 for addition. \n Press 2 for subcraction. \n Press 3 for multiplication. \n Press 4 for division. \n Press 5 for modulator.=");
//  scanf("%d",&option);
//
//switch(option){
//	
//	case 1:
//  	c = add(num1,num2);
//  	printf("The addition of %d and %d is %d", num1, num2, c);
//    break;
//
//	case 2:
//    c = sub(num1,num2);
//    printf("The subctraction of %d and %d is %d", num1, num2, c);
//    break;		
//  
//  	case 3:
//	c = mul(num1,num2);
//  	printf("The multiplaction of %d and %d is %d", num1, num2, c);
//    break;
//
// 	case 4:
//  	c = Div(num1,num2);
//  	printf("The addition of %d and %d is %d", num1, num2, c);
//    break;
//    
//    case 5:
//  	c = Div(num1,num2);
//  	printf("The addition of %d and %d is %d", num1, num2, c);
//    break;
//} 
// 	
//   
//	return 0;
//}


//==================================================
// Q.2:-

//int square(){
//    int num,res;
//    printf("Enter a number = ");
//    scanf("%d",&num);
//    res = sqrt(num);
//	printf("The squar root of your number %d is %d.",num, res);
//	}
//
//
//int main(int argc, char *argv[]) {
//  
//  square();
//  
//	return 0;
//}


//==================================================

// Q.3:-

//int swap(int num_1, int num_2){
////    int num_1, num_2, random;
////    printf("Enter two number =");
////    scanf("%d%d",&num_1,&num_2);
//   int random;
//    random=num_1;
//	 num_1=num_2;
//    num_2=random;
//    //  printf("Before swaping %d and %d \n",num_1,num_2);
//  //  printf("\t \' RESULT \' \t \n");
//	printf("After swaping %d and %d \n",num_1,num_2);
//	
//	}
//
//
//int main(int argc, char *argv[]) {
//  int x = 4, y = 8;
//  printf("Before swaping %d is %d \n",x,y); 
//  swap(x,y); 
//	return 0;
//}





























//------Function without argument and without return-----------

//void sum (){
//	int a, b, c;
//	printf("Enter two numbers:");
//	scanf("%d%d",&a,&b);
//	c=a+b;
//	printf("The sum of tow numbers is:%d",c);
//}
//
//
//int main(int argc, char *argv[]) {
//	
//sum();	
//	
//	
//	return 0;
//}



//------Function with argument and without return-----------


//void sum (int a, int b){
//	int c;
//	c=a+b;
//	printf("The sum of two numbers is:%d",c);
//}
//
//
//int main(int argc, char *argv[]) {
//int x=4 ,y=4;
//sum(x,y);	
//	
//	
//	return 0;
//}



//------Function without argument and with return-----------

//int sum (){
//	int a,b,c;
//	printf("Enter two numbers:");
//    scanf("%d%d",&a,&b);
//	c=a+b;
//	return c;
//	}
//
//
//int main(int argc, char *argv[]) {
//int add = sum();
//printf("The sum of nummbers is = %d",add);	
//	
//	return 0;
//}


//------Function with argument and with return-----------

//int sum (int a,int b){
//    int c;
//	c=a+b;
//	return c;
//	}
//
//
//int main(int argc, char *argv[]) {
//  int x=4 , y=10;
//  int add = sum(x,y);
//  printf("The sum is =%d",add); 
//	return 0;
//}

//===============================================









