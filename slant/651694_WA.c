#include<stdio.h>
int main(void){
	int x1,x2,y1,y2;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
    if(!x1==0&&!y1==0) printf("%d %d",y1/x1,y1%x1);
	else if(!x1/y1==0||!x1==0&&!y1==0) printf("%d %d",y1/x1,y1%x1);
	else printf("%d %d",y2/x2,y2%x2);
	return 0;
}