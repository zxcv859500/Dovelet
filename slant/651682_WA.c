#include<stdio.h>
int main(void){
	int x1,x2,y1,y2;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	printf("%d %d",y1/x1,y1%x1);
	return 0;
}