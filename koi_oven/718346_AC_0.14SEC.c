#include <stdio.h> 

int main() 
{ 
int a, b, c, i; 
scanf("%d %d", &a, &b); 
scanf("%d", &c); 
for (i=0; i<c; i++) { 
b++; 
if (b==60) { 
a++; 
b=0; 
} 
if (a==24) a = 0; 
} 
printf("%d %d\n", a, b); 
return 0; 
} 
