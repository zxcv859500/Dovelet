#include<stdio.h>
int main(void){
int max,min,tmp;
if(max<min){
tmp=max;
max=min;
max=tmp;
}
printf("%d %d",max,min);
return 0;
}