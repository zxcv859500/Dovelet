#include<stdio.h>
int main(void) 
{ 
     int a,b,c; 

     scanf("%d%d%d",&a,&b,&c); 

     if (a+c-b>0) 
      
          puts("do not advertise"); 
      
     else if(a+c-b<0) 
      
          puts("advertise"); 
      
     else if(a+c-b==0) 
      
          puts("does not matter"); 
      
} 