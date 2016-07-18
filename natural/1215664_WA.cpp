#include<stdio.h>
#include<algorithm>
int main(void){
	int N,a[20001],MIN=0x7fffffff,cnt=0,tmp_i,tmp_j,res,i,j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) scanf("%d", &a[i]);
	std::sort(a + 1, a + N + 1);
	for (i = 1; i <= N; i++){
		for (j = 1; j <= N; j++){
			if (a[i] > a[j]){
				tmp_i = a[i];
				tmp_j = a[j];
			}
			else if(a[i]<a[j]){
				tmp_i = a[j];
				tmp_j = a[i];
			}
			cnt += tmp_i - tmp_j;
		}
		if (MIN > cnt){
			MIN = cnt;
			res = i;
		}
	}
	printf("%d", a[res]);
	return 0;
}