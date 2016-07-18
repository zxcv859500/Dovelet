#include<stdio.h>
#include<algorithm>
using namespace std;
int days[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
struct A{
	int st,fi;
	bool operator<(const A &a)const{
		return st<a.st;
	}
}list[100001];
int cvtday(int m,int d){
	return days[m-1]+d;
}
int main(void){
	int a,b,c,d,N,i,tail,finpoint,j,max;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d",&a,&b);
		list[i].st=cvtday(a,b);
		scanf("%d %d",&c,&d);
		list[i].fi=cvtday(c,d);
	}
	tail=cvtday(3,1);
	finpoint=cvtday(11,30);
	sort(list+1,list+1+N);
	for(i=1;i<=N;i++){
		max=0;
		for(j=1;j<=N;j++){
			if(list[j].st<=tail&&list[j].fi>max) max=list[j].fi;
		}
		tail=max;
		if(tail>finpoint){
			break;
		}
	}
	if(i==366){
		printf("0");
		return 0;
	}
	printf("%d",i);
	return 0;
}
