#include<stdio.h>
int main(void){
	int on,off,i,result=0,max=0;
	for(i=1;i<=4;i++){
		scanf("%d %d",off,on);
		result+=on;
		result-=off;
		if(max<result) max=result;
	}
	printf("%d",max);
	return 0;
}
