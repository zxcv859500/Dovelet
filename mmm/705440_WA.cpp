#include<stdio.h>
int main(void){
	//freopen("INPUT.txt","rt",stdin);
	//freopen("OUTPUT.txt","wt",stdout);
	int i,arr[11],res,MAX=0,MIN=0x7fffffff;
	for(i=1;i<=10;i++,res+=arr[i]){
		scanf("%d",&arr[i]);
		if(arr[i]>MAX) MAX=arr[i];
		if(arr[i]<MIN) MIN=arr[i];
	}
	printf("%d%d%d",res,MAX,MIN);
	return 0;
}