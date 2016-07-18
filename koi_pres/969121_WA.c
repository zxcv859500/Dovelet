#include<stdio.h>
int i,N,a,b,c,fi_cnt=0,se_cnt=0,th_cnt=0;
struct A{
	int fi,se,th;
}graph[4];
void result(int cnt){
	printf("%d",cnt);
	if(cnt==1) printf(" %d",fi_cnt);
	else if(cnt==2) printf(" %d",se_cnt);
	else printf(" %d",th_cnt);
	if(cnt==0){
		printf("0");
		printf(" %d",fi_cnt);
	}
}
int main(void){
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a==1) graph[1].fi++;
		else if(a==2) graph[1].se++;
		else if(a==3) graph[1].th++;
		if(b==1) graph[2].fi++;
		else if(b==2) graph[2].se++;
		else if(b==3) graph[2].th++;
		if(c==1) graph[3].fi++;
		else if(c==2) graph[3].se++;
		else if(c==3) graph[3].th++;
		fi_cnt+=a;
		se_cnt+=b;
		th_cnt+=c;
	}
	if(fi_cnt>se_cnt&&fi_cnt>th_cnt) result(1);
	else if(se_cnt>fi_cnt&&se_cnt>th_cnt) result(2); 
	else if(th_cnt>fi_cnt&&th_cnt>se_cnt) result(3);
	else if(fi_cnt==se_cnt&&fi_cnt==th_cnt){
		if(graph[1].th>graph[2].th&&graph[1].th>graph[3].th) result(1);
		else if(graph[2].th>graph[1].th&&graph[2].th>graph[3].th) result(2);
		else if(graph[3].th>graph[1].th&&graph[3].th>graph[2].th) result(3);
		else if(graph[1].se>graph[2].se&&graph[1].se>graph[3].se) result(1);
		else if(graph[2].se>graph[1].se&&graph[2].se>graph[3].se) result(2);
		else if(graph[3].se>graph[1].se&&graph[3].se>graph[2].se) result(3);
		else result(0);
	}
	return 0;
}