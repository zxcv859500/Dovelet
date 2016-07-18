#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void){
	int j,i,N,grid[100001];
	scanf("%d",&N);
	for(i=1;i<=N;i++) scanf("%d",&grid[i]);
	sort(grid+1,grid+i+N);
	for(i=1;i<=N;i++) printf("%d",grid[i]);
	return 0;
}