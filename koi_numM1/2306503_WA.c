#include<stdio.h>
int lcm(int a,int b) //�ּҰ������ ��ȯ�ϴ� �Լ�
{
           int i,j;
           int temp; //������� ������ ����
          
           j = (a>b)?a:b; //���� ū���� ����
          
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
    