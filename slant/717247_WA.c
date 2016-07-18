#include<stdio.h>
int main(void){
	int a,b,c,d,tmp_x,tmp_y,res;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	tmp_x=c-a;
	tmp_y=d-b;
	printf("%d%d",tmp_y/tmp_x,tmp_x);
	return 0;
}
