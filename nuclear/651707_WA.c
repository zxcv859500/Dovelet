#include<stdio.h>
int main(void){
	int k,n,i,E_mev=0;
	scanf("%d %d",&k,&n);
	for(i=0;i==n;){
		i*k;//분열하는 핵
		E_mev+=100*k;//에너지 양
	}
	printf("%d",E_mev);
	return 0;
}
