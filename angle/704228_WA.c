#include <stdio.h> 

int main(void) 
{ 
     float x, in; 
     float out; 
     scanf("%f", &x); 
     in = (x-2)*180; 
     out = (180-(in/x))*x; 
     printf("%d %d", (int)in, (int)out); 
     return 0; 
} 