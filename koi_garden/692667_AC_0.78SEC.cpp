#include<stdio.h>
#include<algorithm>
using namespace std;
int days[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
struct A{
	int st,fi;
	bool operator<(const A &a)const{
		return st<a.st;
	}
}flower[100001];
inline int cvtday(int m,int d){
	return days[m-1]+d;
}
int main(){
	int i,tail,fipoint,a,b,c,d,max,j,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		flower[i].st=cvtday(a,b);
		flower[i].fi=cvtday(c,d);
	}
	sort(flower+1,flower+1+N);
	tail=cvtday(3,1);
	fipoint=cvtday(11,30);
	for(i=1;i<=365;i++){
		max=0;
		for(j=1;j<=N;j++){
			if(flower[j].st<=tail&&max<flower[j].fi)
				max=flower[j].fi;
		}
		tail=max;
		if(tail>fipoint)
			break;
	}
	if(i==366){
		printf("0");
		return 0;
	}
	printf("%d",i);
	return 0;
}