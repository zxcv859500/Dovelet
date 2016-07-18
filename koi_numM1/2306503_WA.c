#include<stdio.h>
int lcm(int a,int b) //최소공배수를 반환하는 함수
{
           int i,j;
           int temp; //공배수를 저장할 변수
          
           j = (a>b)?a:b; //둘중 큰수를 구함
          
           for(i=j;;i++) {
                     if(i%a==0 && i%b==0){
                                temp = i;
                                break;
                     }
           }
          
           return temp;
}
int main(){
	int a,b,c,res;
	scanf("%d%d",&a,&b);
	res=lcm(a,b);
	for(;;){
		if(a<b){
			c=a, a=b, b=c;
		}
		else if((a>b) && !(a%b==0)){
			c=a, a%=b;
		}
		else if((a>b && a%b==0))
		{
			a=b;
			break;
		}
	}
	printf("%d %d", a,res);
	return 0;
}
    