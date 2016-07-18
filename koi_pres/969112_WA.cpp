#include<stdio.h>
int i,N,a,b,c,fi_cnt=0,se_cnt=0,th_cnt=0;
struct A{
	int fi,se,th;
}graph[4];
void result(int cnt){
	printf("%d",cnt);
	if(cnt==1) printf("%d",fi_cnt);
	else if(cnt==2) printf("%d",se_cnt);
	else printf("%d",th_cnt);
}
int main(void){
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d",&a,&b,&c);
		fi_cnt+=a;
		se_cnt+=b;
		th_cnt+=c;
	}
	if(fi_cnt>se_cnt&&fi_cnt>th_cnt) result(1);
	else if(se_cnt>fi_cnt&&se_cnt>th_cnt) result(2); 
	else result(3);
	return 0;
}