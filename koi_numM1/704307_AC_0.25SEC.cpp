#include<stdio.h>
#include<math.h>
bool check(long long a,long long b,int p)
{
	long long tmp;
	while(a!=0){
		tmp=a;a=b;b=tmp;
		a%=b;
	}
	return b!=p;
}
int main()
{
	int a,b;
	long long mul,i;
	scanf("%d%d",&a,&b);
	mul=(long long)a*b;
	for(i=(long long)(sqrt(a)*sqrt(b)+1);i>=2;i--){
		if(mul%i!=0||i%a!=0||(mul/i)%a!=0)continue;
		if(check(i,mul/i,a))continue;
		printf("%lld %lld",i,mul/i);
		return 0;
	}
	return 0;
}