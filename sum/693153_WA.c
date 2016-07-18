#include<stdio.h>
int sum[8];
int main(void){
	int i,result=0;
	for(i=1;i<=sum;i++){
		scanf("%d",sum[i]);
		result+=sum[i];
	}
	printf("%d",result);
	return 0;
}
