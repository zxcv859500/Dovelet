#include<stdio.h>
int N,arr[31],plus=0,ans=0;
void back(int num,int cnt){
	if(N<num) return;
	if((plus/2)==cnt){
		ans++;
		return;
	}
	back(num+1,cnt+arr[num+1]);
	back(num+1,cnt);
}
int main(void){
	int i;
	//freopen("INPUT.txt","rt",stdin);
	//freopen("OUTPUT.txT","wt",stdout);
	scanf("%d",&N);
	for(i=1;i<=N;i++) scanf("%d",&arr[i]);
	for(i=1;i<=N;i++) plus+=arr[i];
	back(0,0);
	if(ans>N){
		printf("impossible");
		return 0;
	}
	printf("%d",ans);
	return 0;
}