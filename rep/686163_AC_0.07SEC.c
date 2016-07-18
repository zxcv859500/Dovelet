#include<stdio.h>
int main(void){
int N,i,result=0;
scanf("%d",&N);
for(i=1;i<=N;i++) printf("%d ",++result);
return 0;
}