#include<stdio.h>
int main(void){
	int a,b,c,d;
	float res;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	res=a+b+c+d;
	printf("%lf.2",res/4);
	return 0;
}