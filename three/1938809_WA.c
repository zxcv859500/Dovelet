#include<stdio.h>
int main(void){
int a,b,fi,se,th;
scanf("%d%d",&a,&b);
fi=a/100;
se=(a-fi*100)/10;
th=(a-se*10);
printf("%d\n%d\n%d\n%d",b*fi,b*se,b*th,a*b);
return 0;
}