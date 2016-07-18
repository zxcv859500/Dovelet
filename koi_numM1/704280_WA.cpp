#include<stdio.h>
int x,y,ans_1,ans_2;
void back(int N,int cnt){
	if(x*y==N*cnt){
		ans_1=N;
		ans_2=cnt;
		return;
	}
	back(N+1,cnt);
	back(N,cnt+1);
}
int main(void){
	//freopen("INPUT.txt","rt",stdin);
	//freopen("OUTPUT.txt","wt",stdout);
	scanf("%d %d",&x,&y);
	back(1,1);
	printf("%d %d",ans_1,ans_2);
	return 0;
}