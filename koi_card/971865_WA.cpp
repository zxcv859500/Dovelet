#include<stdio.h>
struct A{
	int st,fi;
}card[11];
bool chk[11];
int main(void){
	int sum_a=0,sum_b=0,i,cnt=0;
	for(i=1;i<=10;i++) scanf("%d",&card[i].st);
	for(i=1;i<=10;i++) scanf("%d",&card[i].fi);
	for(i=1;i<=10;i++){
		if(cnt==10) break;
		if(card[i].st>card[i].fi) sum_a+=3;
		else if(card[i].st==card[i].fi){
			sum_a+=1;
			sum_b+=1;
			cnt++;
			chk[i]=true;
		}
		else sum_b+=3;
	}
	printf("%d %d\n",sum_a,sum_b);
	if(sum_a>sum_b) printf("A");
	else if(sum_a==sum_b){
		if(cnt==10) printf("D");
		else{
			for(i=10;i>=0;i--){
				if(chk[i]==false){
					if(card[i].st>card[i].fi) printf("A");
					else printf("B");
				}
			}
		}
	}
	else printf("B");
	return 0;
}