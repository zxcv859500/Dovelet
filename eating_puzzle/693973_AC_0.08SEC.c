#include<stdio.h>
//항상 N,B같이 어떤 수의 갯수나 그렇게 광범위하게 쓰이는것은 전역변수로
int C,B;
int arr[22],ans=0;//입력받을것., 사실 6개니깐 6으로 해도 되는데 우리는 1~6까지로 써먹고 0 인덱스는
//안쓸꺼라서 7개 만든거임 ㅇㅋ? ㅇ 
void input(){
	int i;
	scanf("%d%d",&C,&B);
	for(i=1;i<=B;i++){//b개 입력받음.
		scanf("%d",&arr[i]);
	}
}
void back(int N,int sum){//여까지 이해 갔음? ㅇㅇ input 따위
	if(sum>=C)
		return;
	if(N>=B){
		if(ans<sum)//잠만 됐음
			ans=sum;
		return;
	}//N은 멍미 잠수중임..언제까지... 
	back(N+1,sum+arr[N+1]);
	back(N+1,sum);
}
int main(){
	input();//끝.
	back(0,0);//항상 백은 안에 인자값이 들어감. 근데 그것은 문제에 따라서 달라.
	//근데 여기서는 머라꼬 아나 도 이러녜.. ㅡㅡ..
	//여끼써는 뭐라꼬 썰쩡