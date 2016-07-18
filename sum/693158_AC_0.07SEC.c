#include<stdio.h>
int sum[8];
int main(void){
	int i,result=0;
	for(i=1;i<=7;i++){
		scanf("%d",&sum[i]);
		result+=sum[i];
	}
	printf("%d",result);
	return 0;
}
