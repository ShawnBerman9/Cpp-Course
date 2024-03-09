#include<      n vstdio.h>
#include<math.h>
void palindrone(int num){

	int palin=0;
	int temp;
	int rem;
	temp=num;
	while(num>0){

		rem=num%10;
		num=num/10;
		palin=palin*10+rem;
   
	}    
	if(palin==temp){
		printf("%d is palindrone ",temp);
	}
	else{
			printf("%d is not palindrone ",temp);
	}
}
  

int main(){
	int num;
	printf("enter the number ");
	scanf("%d",&num);
	while(num>0){
		palindrone(num);
		printf("\nenter another the number ");
		scanf("%d",&num);
	}
}

