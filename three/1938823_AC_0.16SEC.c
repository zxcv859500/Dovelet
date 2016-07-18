#include<stdio.h>
int main(void){
int a,b,fi,se,th;
scanf("%d%d",&b,&a);
fi=a/100;
se=(a-(fi*100))/10;
th=(a-(fi*100)-(se*10));
printf("%d\n%d\n%d\n%d\n",b*th,b*se,b*fi,a*b);
return 0;
}