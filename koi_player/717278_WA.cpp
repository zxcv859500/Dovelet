
//koi_wire ÁßµîºÎ
#include<stdio.h>
#include<algorithm>
#define NN 555555
struct A{
    int a,b;
    bool operator<(const A &x) const {
        return a<x.a;
    }
}list[NN],tree[NN*2];
int back[NN],chk[NN*2];
int N,sz,ls,rs,fup,ans=0,max,i,j;
int main(void){
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d%d",&list[i].a,&list[i].b);
        if(list[i].a>max) max=list[i].a;
        if(list[i].b>max) max=list[i].b;
    }
    std::sort(list+1,list+N+1);
    for(sz=1;sz<max;sz*=2);
    for(i=1;i<=N;i++){
        ls=sz,rs=sz+list[i].b-2,max=0;
        while(ls<=rs){
            if(ls%2==1){
                if(max<tree[ls].a){
                    max=tree[ls].a;
                    back[i]=tree[ls].b;
                }
                ls++;
            }
            if(rs%2==0){
                if(max<tree[rs].a){
                    max=tree[rs].a;
                    back[i]=tree[rs].b;
                }
                rs--;
            }
            ls/=2,rs/=2;
        }
        if(ans<max+1) ans=max+1,fup=i;
        for(j=sz+list[i].b-1;j>0&&tree[j].a<max+1;j/=2){
            tree[j].a=max+1;
            tree[j].b=i;
        }
    }
    chk[fup]=true;
    for(i=fup;back[i];i=back[i],chk[i]=true);
    printf("%d\n",N-ans);
    for(i=1;i<=N;i++)
        if(!chk[i]) printf("%d\n",list[i].a);
    return 0;
}

