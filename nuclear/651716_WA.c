#include<stdio.h>
int main(void){
	int k,n,i,E_mev=0,j;
	scanf("%d %d",&k,&n);
	for(i=1;i<=n;){
		i=i*k;//분열하는 핵
		E_mev+=100*k;//에너지 양
	}
	printf("%d",E_mev-100);
	return 0;
}
