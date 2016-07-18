#include<stdio.h>
int main(void){
int i,j=1,m;
scanf("%d",&m);
for(i=0;i<m;){
i+=j;
j++;
}
printf("%d",j);
return 0;
}