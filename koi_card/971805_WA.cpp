#include<stdio.h>
struct A{
	int st,fi;
}card[11];
int main(void){
	int sum_a=0,sum_b=0,i;
	for(i=1;i<=10;i++) scanf("%d",&card[i].fi);
	for(i=1;i<=10;i++) scanf("%d",&card[i].st);
	for(i=1;i<=10;i++){
		if(card[i].st>card[i].fi) sum_a+=3;
		else sum_b+=3;
	}
	printf("%d %d\n",&sum_a,&sum_b);
	if(sum_a>sum_b) printf("A");
	else printf("B");
	return 0;
}