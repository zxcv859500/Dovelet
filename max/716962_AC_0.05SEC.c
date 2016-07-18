#include<stdio.h>
int main(void){
int max=0,arr[8],i;
for(i=1;i<=7;i++){
scanf("%d",&arr[i]);
if(max<arr[i]) max=arr[i];
}
printf("%d",max);
return 0;
}

