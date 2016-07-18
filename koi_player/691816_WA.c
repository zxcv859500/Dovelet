#include<stdio.h>
int PLAYER[1001][1001],max=0,min=0x7fffffff,MIN=0x7fffffff;
int main(void){
	int N,M,i,j;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;i++){
		for(j=1;j<=M;j++) scanf("%d",&PLAYER[i][j]);
	}
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			if(max<PLAYER[j][i]) max=PLAYER[j][i];
			if(min>PLAYER[j][i]) min=PLAYER[j][i];
		}
		if(MIN>max-min) MIN=max-min;
		max=0;
		min=0xfffffff;
	}
	printf("%d",MIN);
	return 0;
}
