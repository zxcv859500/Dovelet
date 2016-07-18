#include<stdio.h>
int main(void){
	int a;
	scanf("%d",&a);
	if(a%400==0){
		printf("YES");
		return 0;
	}
	else if(a%100==0) printf("NO");
	else printf("YES");
	return 0;
}