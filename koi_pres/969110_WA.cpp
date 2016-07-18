#include<stdio.h>
struct A{
	int fi,se,th;
}graph[4];
int main(void){
	int i,N,a,b,c,fi_cnt=0,se_cnt=0,th_cnt=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d",&a,&b,&c);
		fi_cnt+=a;
		se_cnt+=b;
		th_cnt+=c;
	}
	if(fi_cnt>se_cnt&&fi_cnt>th_cnt) printf("1");
	else if(se_cnt>fi_cnt&&se_cnt>th_cnt) printf("2");
	else printf("3");
	return 0;
}