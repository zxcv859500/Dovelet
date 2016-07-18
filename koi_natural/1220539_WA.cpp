#include<stdio.h>
int N, a[10001], tmp_i, tmp_j, cnt = 0, MIN = 0x7fffffff, res,cnt_pow=0,MIN_pow=0x7fffffff,res_pow;
bool fi = false;
int pow(int a){
	return a*a;
}
void swap(void){
	int tmp;
	tmp = tmp_i;
	tmp_i = tmp_j;
	tmp_j = tmp;
}
int main(void){
	int i, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) scanf("%d", &a[i]);
	for (i = 1; i <= N; i++){
		for (j = 1; j <= N; j++){
			tmp_i = a[i];
			tmp_j = a[j];
			cnt_pow += pow(i-a[j]);
			if (tmp_i < tmp_j) swap();
			cnt += tmp_i - tmp_j;
		}
		if (cnt_pow == MIN_pow&&fi == true){
			if (a[res_pow]>a[i]) res_pow = i;
		}
		else if (cnt_pow<MIN_pow){
			MIN_pow = cnt_pow;
			res_pow = i;
		}
		if (cnt == MIN&&fi == true){
			if (a[res]>a[i]) res = i;
		}
		else if (cnt < MIN){
			MIN = cnt;
			res = i;
		}
		fi = true;
		cnt = 0;
		cnt_pow = 0;
	}
	printf("%d %d", a[res],res_pow);
}