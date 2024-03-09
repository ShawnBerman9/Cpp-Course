#include <stdio.h>
int guess_game(){
  int guess_num=88;
  int user_num,count=0;
  printf("enter again your guess number : ");
  scanf("%d",&user_num);
  count++;
  if(guess_num==user_num){
    printf("congratz you have won \n");
    printf("you have take %d atempts",count);
  }

 else{
    while(guess_num!=user_num && user_num >=0){
    if(guess_num > user_num){
      printf("you have enter smaller number\n ");
    }
    else if(guess_num< user_num){
      printf("you have enter greater number\n");
      
    }
    else{
      
      return(1);
    }
    printf("enter again your guess number : ");
    scanf("%d",&user_num);
    count++;
  }
  if(user_num<0){
    printf("you have enter neg number and game is close");
  }
  else{
    printf("congratz you won\n");
    printf("you have take %d atempts",count);

  }
  

 }

}
int main(){
  guess_game();

 

  
}
