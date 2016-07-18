#include<stdio.h>
int main(void){
int a,b,fi,se,th;
scanf("%d%d",&a,&b);
fi=b/100;
se=(b-fi*100)/10;
th=(b-se*10);
printf("%d\n%d\n%d\n%d",a*fi,a*se,a*th,a*b);
return 0;
}