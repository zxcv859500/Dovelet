#include<stdio.h>
int main(void){
	int k,n,i,E_mev=0;
	scanf("%d %d",&k,&n);
	for(i=0;i==n;){
		i*k;//�п��ϴ� ��
		E_mev+=100*k;//������ ��
	}
	printf("%d",E_mev);
	return 0;
}
