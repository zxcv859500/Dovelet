#include<stdio.h>
int D,ans_cnt,ans_num;
void dfs(int cnt,int num){
	if((D*D)==(cnt*cnt)+(num*num)){
		ans_cnt=cnt;
		ans_num=num;
		return;
	}
	dfs(cnt+1,num);
	dfs(cnt,num+1);
}
int main(void){
	scanf("%d",&D);
	dfs(1,1);
	printf("%d %d",ans_cnt,ans_num);
	return 0;
}