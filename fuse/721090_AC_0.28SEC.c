#include<stdio.h>
int main(void){
    int i,j,l,re;
    scanf("%d %d %d",&i,&j,&l);
    i=i*15+i*10;
    j*=20;
    l*=5;
    re=2*(i+j+l);
    re=(re+90)/100*10;
    printf("%d amperes",re);
    return 0;
}