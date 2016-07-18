#include<stdio.h>
int main(void){
int max=0,arr[8],i;
for(i=1;i<=7;i++){
scanf("%d",&arr[i]);
if(arr[max]<arr[i]) max=i;
}
printf("%d",max);
return 0;
}
