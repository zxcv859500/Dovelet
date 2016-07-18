#include <stdio.h>
 
int n, d, k, c, sushi[3003007];
int cur_cnt[3007], cur_res;
int res;
 
void push(int sushi_num)
{
    if(cur_cnt[sushi_num] == 0) cur_res++;
 
    cur_cnt[sushi_num]++;
}
 
void pop(int sushi_num)
{
    cur_cnt[sushi_num]--;
 
    if(cur_cnt[sushi_num] == 0) cur_res--;
}
 
int main(void)
{
     
    int i;
 
    scanf("%d %d %d %d", &n, &d, &k, &c);
 
    for(i = 1; i <= n; i++)
        scanf("%d", &sushi[i]);
 
    for(i = n+1; i < n+k; i++)
        sushi[i] = sushi[i-n];
 
     
    // use O(n) algorithm
    push(c);
     
    for(i = 1; i < k; i++)
        push(sushi[i]);
 
    for(i = k; i < n+k; i++)
    {
        push(sushi[i]);
 
        if(cur_res > res) 
            res = cur_res;
         
        pop(sushi[i-k+1]);
    }
     
    printf("%d\n", res);
 
    return 0;
}