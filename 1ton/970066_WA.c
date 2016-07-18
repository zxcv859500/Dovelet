#include<stdio.h>
int main(void){
	int i,j=0,N;
	scanf("%d",N);
	for(i=1;i<=N;i++) j+=i;
	printf("%d",j);
	return 0;
}
