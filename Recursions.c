#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//-----------------factorial---------------------

//int factorial(int x){
//	printf("Calling factorial (%d)\n",x);
//	int f;
//	if(x == 0 || x == 1)
//		return 1;
//	else
//	f = x * factorial(x-1);	
//}
//int main(int argc, char *argv[]) {
//	int x = 10;
//	int res = factorial(10);	
//	printf("The factorial of %d is %d",x,res);
//	return 0;
//}

//--------------------sum-----------------------



//int sum(int x){
//	printf("Calling factorial (%d)\n",x);
//	int f;
//	if(x == 0 || x == 1)
//		return 1;
//	else
//	f = x + sum(x-1);	
//}
//int main(int argc, char *argv[]) {
//	int x = 4;
//	int res = sum(4);	
//	printf("The sum of %d is %d",x,res);
//	return 0;
//}


//------------average---------------


int power(int base, int num){
//	printf("Calling factorial (%d)\n",num);
//	int f;
	if(num != 0){
		return  base * power(base,num-1);
}
	else
		return 1;	 
	
//	else
//	f = x + sum(x-1);	
}
int main(int argc, char *argv[]) {
	int base = 4, a = 4 ;
	int res = power(base, a);	
	printf("-> %d^%d = %d.",base,a,res);
	return 0;
}

