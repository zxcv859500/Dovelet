#include<stdio.h>
int main(void){
int max,min,tmp;
scanf("%d %d",&max,&min);
if(max<min){
tmp=max;
max=min;
max=tmp;
}
printf("%d %d",max);
return 0;
}