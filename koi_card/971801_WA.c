#include<stdio.h>
int main(void){
	int a,b,i,result_a=0,result_b=0;
	for(i=1;i<=10;i++){
		scanf("%d %d",&a,&b);
		if(a>b) result_a+=3;
		else result_b+=3;
	}
	printf("%d %d\n",result_a,result_b);
	if(result_a>result_b) printf("A");
	else printf("B");
	return 0;
}