#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void){
int i,N,arr[100001];
scanf("%d",&N);
for(i=1;i<=N;i++) scanf("%d",&arr[i]);
sort(arr+1,arr+1+N);
for(i=1;i<=N;i++) printf("%d ",arr[i]);
return 0;
}