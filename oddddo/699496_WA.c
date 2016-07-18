#include<stdio.h>
int D[1001];
int main(void){
	int N,i,ans=0;
	D[1]=1;
	for(i=2;i<=1000;i++) D[i]=D[i-1]+2;
	scanf("%d",&N);
	for(i=1;i<=N;i++) ans+=D[i];
	for(;i>=1;i--) ans+=D[i];
	printf("%d",ans);
	return 0;
}