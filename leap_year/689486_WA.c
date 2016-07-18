#include<stdio.h>
int main(void){
	int a;
	scanf("%d",&a);
	if(a==600) printf("NO");
	if(a%4==0&&!a/100==0||a%400==0){
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}
