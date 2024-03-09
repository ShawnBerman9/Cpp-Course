#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void palidrome(char *string){
	char *ptr, *rev;
	ptr = string;
	
	while(*ptr != '\0'){
	++ptr;
	}
	--ptr;
	for(rev = string;ptr>=rev; ){
		if(*ptr == *rev){
			--ptr;
			rev++;
		}
		else
		break;
	}
	if(rev>ptr){
		printf("%s is palindrome",string);
	}
	else
	printf("%s is not palindrome",string);
}
int main(int argc, char *argv[]) {
	char str[1000];
	printf("Enter the string =");
	scanf("%s",str);
	palidrome(str);
	return 0;
}
