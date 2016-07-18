#include<stdio.h>
int arr[22],C,B,ans=0;
void back(int N,int sum){
	if(C<=sum)
		return;
	if(N>=B){
		if(ans<sum)
			ans=sum;
		return;
	}
	back(N+1,sum+arr[N+1]);
	back(N+1,sum);
}
int main(void){
	int i,j;
	scanf("%d %d",&C,&B);
	for(i=1;i<=B;i++) scanf("%d",&arr[i]);
	back(0,0);
	printf("%d",ans);
	return 0;
}
	