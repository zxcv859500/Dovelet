#include<stdio.h>
int main(void){
	int a,b,tmp;
	scanf("%d %d",&a,&b);
	if(b>a){
		tmp=a;
		a=b;
		b=tmp;
	}
	for(;a<=b;a++) printf("%d",a);
	return 0;
}