#include<stdio.h>
#include<algorithm>
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
    std::sort(a + 1, a + N + 1);
    for (i = 1; i <= N; i++){
        for (j = 1; j <= N; j++){
            tmp_i = a[i];
            tmp_j = a[j];
            if (tmp_i < tmp_j) swap();
            cnt += tmp_i - tmp_j;
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
    }
    fi = false;
    for (i = 1; i <= a[N]; i++){
        for (j = 1; j <= N; j++)
            cnt_pow += pow(i - a[j]);
        if (cnt_pow == MIN_pow){
            if (i < res_pow) res_pow = i;
        }
        if (cnt_pow < MIN_pow){
            MIN_pow = cnt_pow;
            res_pow = i;
        }
        cnt_pow = 0;
        fi = true;
    }
    printf("%d %d", a[res],res_pow);
    return 0;
}