#include<stdio.h>
int main(void){
int a,b,fi,se,th;
scanf("%d%d",&a,&b);
fi=a/100;
se=(a-(fi*100))/10;
th=((fi*100/10)-(se*10));
printf("%d\n%d\n%d\n%d\n",b*th,b*se,b*fi,a*b);
printf("%d %d %d",fi,se,th);
return 0;
}