#include<stdio.h>
int main(void){
	int N,i,res=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("%d",i);
		if(i<N) printf("+");
		res+=i;
	}
	printf("=%d",res);
	return 0;
}