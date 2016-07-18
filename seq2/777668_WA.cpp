#include<stdio.h>
int main(void){
int N,res=0,i;
scanf("%d",&N);
for(i=1;i<=N;i++) printf("1..%d %d",N,res+N);
return 0;
}