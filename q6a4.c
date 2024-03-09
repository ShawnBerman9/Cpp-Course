#include<stdio.h>
int main(){
	int weather[100];
	int hot_day[20],pleasant[20],cold[20];
	int i,count_h,count_p,count_c,j,freq;
	float sum=0,avg;
	for(i=0;i<14;i++){
		printf("enter the temperature of day # %d: ",i+1);
		scanf("%d",&weather[i]);
		sum=sum+weather[i];
	}
	//printf("%d\n",sum);
	
	for(i=0;i<14;i++){
		if(weather[i]>=30){
			hot_day[count_h]=i+1;
			count_h++;
		}
		else if(weather[i]<30 && weather[i]>=20){
			pleasant[count_p]=i+1;
			count_p++;
		}
		else{
			cold[count_c]=i+1;
			count_c++;
		}
	
	}
	printf("hot days :\n ");
	for(i=0;i<count_h;i++){
		printf("day # %d = %d\n",hot_day[i],weather[hot_day[i]-1]);
	}
	printf("total hot days are %d\n",count_h);
	
	printf("pleasant days :\n ");
	for(i=0;i<count_p;i++){
		printf("day # %d = %d\n",pleasant[i],weather[pleasant[i]-1]);
	}
	printf("total pleasant days are %d\n",count_p);
	printf("Cold days :\n ");
	for(i=0;i<count_c;i++){
		printf("day # %d = %d\n",cold[i],weather[cold[i]-1]);
	}
	printf("total cold days are %d\n",count_c);
  avg=sum/14;
  printf(" the average temoerature of 2 weeks are %.2f\n",avg);
}
