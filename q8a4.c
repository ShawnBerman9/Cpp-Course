#include <stdio.h>
int main(){
	int i,j,end;
	printf("enter the number till you want series : ");
	scanf("%d",&end);
	
	for(i=1;i<=end;i++){
		for(j=1;j<=i;j++){
			if(j==1 || j==i){
				printf("1");
			}
			else{
				printf("%d",i-1);
			}
		}
		printf("\n");
	}
}
