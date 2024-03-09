#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main(){
		
    int i,num,j,k,count;
    
    printf("Enter number to which ramanujan is needed: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        count=0;
        for(j=1;j*j*j<i;j++){
            for(k=j;j*j*j+k*k*k<=i;k++){
                if(j*j*j+k*k*k==i){
                  count++;x
                }
            }
        }
        if(count==2){
            printf("%d\n",i);
        }
    }
}


