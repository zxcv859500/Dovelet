#include <stdio.h>
int cnt;
int gp[101][101] = {0};
int chk[101],N;
void dfs(int n){
    int i;
    if(chk[n]) return;
    chk[n] = 1;
    cnt++;
    for(i=1;i<=N;i++){
        if(gp[n][i] == 1){
            dfs(i);
        }
    }
    return;
}
int main(void){
    int i,a,j,M,b;
//  freopen("INPUT.TXT","rt",stdin);
//  freopen("OUTPUT.TXT","wt",stdout);
    scanf("%d%d",&N,&M);
    for(i=1;i<=M;i++){
        scanf("%d%d",&a,&b);
        gp[a][b] = 1;
        gp[b][a] = 1;
    }
    dfs(1);
    printf("%d",cnt-1);
    return 0;
}