#include<stdio.h>
int main(void){
int N,i,arr[1001],ans=0,j;
scanf("%d",&N);
for(i=1;i<=N;i++){
for(j=i;j<=N;j+=j){
if(arr[j]==0){
arr[j]=1;
}
else arr[j]=0;
}
}
for(i=1;i<=N;i++){
if(arr[i]==1) ans++;
}
printf("%d",ans);
return 0;
}