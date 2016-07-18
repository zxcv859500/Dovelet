#include<stdio.h>
int C,B,arr[22],ans=0,i;
void back(int N,int cnt){
	if(B<=N)//바구니수 N바구니 몇개 
		return;
	if(C<=cnt){
		if(ans<=cnt) ans=cnt;
		return;
	}
	back(N+1,cnt);
	back(N+1,cnt=arr[N]);
}
int main(void){
	scanf("%d %d",&C,&B);
	for(i=1;i<=B;i++) scanf("%d",&arr[i]);
	back(0,0);
	printf("%d",ans);
	return 0;
}
