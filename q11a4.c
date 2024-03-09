#include <stdio.h>
#include <stdlib.h>
// sir might be you find the same logic of this question in some of students it is because miss fozia give us the same question in cp lab, the qs is not copy paste
int fabo_series(int num);
int main(){
	int num,i;
	printf("enter the num : ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%d\n",fabo_series(i));
	}
	
}
int fabo_series(num){
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	else{
		return fabo_series(num-2)+fabo_series(num-1);
	}
}
