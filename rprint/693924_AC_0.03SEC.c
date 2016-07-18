#include<stdio.h>
int main(void){
	int i,N,arr[1001];
	scanf("%d",&N);
	for(i=1;i<=N;i++) scanf("%d",&arr[i]);
	for(i--;i>=1;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
