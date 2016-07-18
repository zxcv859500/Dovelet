#include<stdio.h>
int main(void){
	int arr[8],i,min=0x7fffffff;
	for(i=1;i<=7;i++) scanf("%d",&arr[i]);
	for(i=1;i<=7;i++){
		if(arr[i]<min) min=arr[i];
	}
	printf("%d",min);
	return 0;
}