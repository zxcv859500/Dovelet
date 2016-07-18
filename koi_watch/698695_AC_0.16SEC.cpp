#include<stdio.h>
int N,h,m,s;
void input(void){
    scanf("%d %d %d %d",&h,&m,&s,&N);
    return;
}
int main(void){
    input();
    int i;
    for(i=1;i<=N;i++){
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>23){
            h=0;
            m=0;
            s=0;
        }
    }
    printf("%d %d %d",h,m,s);
    return 0;
}