#include<stdio.h>
int main(void){
	bool chk=false;
	int sec,i,count_day=0,count_h=0,count_m=0,count_s=0;
	scanf("%d",&sec);
	for(i=1;i<=sec;i++){
		if(count_s==60){
			count_s=0;
			count_m++;
		}
		if(!chk) count_s++;
		if(count_m==60){
			count_m=0;
			count_h++;
		}
		if(count_h==24){
			count_h=0;
			count_day++;
		}
		if(i==sec&&count_s==60){
			sec++;
			chk=true;
		}
	}
	printf("%d %d %d %d",count_day,count_h,count_m,count_s);
	return 0;
}