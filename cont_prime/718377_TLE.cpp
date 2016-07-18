#include<stdio.h>
int primer[100001],cnt=1,n;
bool ans=false;
void prime(int s){
int i;
for(i=2;i<n;i++)
if(!s%i==0) return;
primer[cnt]=i;
cnt++;
}
void back(int num,int inum){
if(num>=n||inum>=n) return;
if(primer[num]+primer[inum]==n){
ans=true;
return;
}
back(num+1,inum);
back(num,inum+1);
}
int main(void){
int i;
scanf("%d",&n);
for(i=1;i<=n;i++) prime(i);
back(1,1);
printf("%d",ans);
return 0;
}