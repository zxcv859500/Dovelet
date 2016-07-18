#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	n=n/n*n;
	m=m/m*n;
	printf("%d",m);
	return 0;
}