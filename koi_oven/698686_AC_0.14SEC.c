#include<stdio.h>
int N,h,m;
int main(void){
	scanf("%d %d %d",&h,&m,&N);
	int i;
	for(i=1;i<=N;i++){
		m++;
		if(m>59){
			m=0;
			h++;
		}
		if(h>23){
			h=0;
			m=0;
		}
	}
	printf("%d %d",h,m);
	return 0;
}