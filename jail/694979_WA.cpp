#include<stdio.h>
#define out 1
#define open 2
#define close 3
int main(void){
	int i,j,N,arr[11],ans=0;
	bool count=true;
	N=10;
	arr[1]=out;
	for(i=2;i<=N;i++) arr[i]=open;
	for(i=2;i<=N;i++){
		count=true;
		if(arr[i]=open){
			for(j=i;j<=N;j*=2){
				if(count){
					j*=2;
					count=false;
				}
				arr[j]=close;
			}
			arr[i]=out;
		}
	}
	for(i=1;i<=N;i++){
		if(arr[i]==out) ans++;
	}
	printf("%d",ans);
	return 0;
}
