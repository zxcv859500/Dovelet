#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a/86400;
	c=a%86400;
	d=c/3600;
	c=c%3600;
	e=c/60;
	f=c%60;
	printf("%d %d %d %d",b,d,e,f);
	return 0;
}
