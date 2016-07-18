#include<stdio.h>
int main(void){
	int i,x,y,tmp_x,x2,y2;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&x2,&y2);
	tmp_x=x;
	for(i=1;tmp_x>=y-x;x=x*i) i++;
	printf("%d %d",i,y-x);
	return 0;
}
