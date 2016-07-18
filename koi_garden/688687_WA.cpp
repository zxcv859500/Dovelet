#include<stdio.h>
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},N,min=0x7fffffff;
bool chk[100001],zerochk=false;
struct A{
	int st,fi;
}flower[100001];
bool ok(void){
	int i,j;
	bool daychk[366];
	for(i=1;i<=N;i++){
		if(chk[i]){
			if(flower[j].st<flower[j].fi)
				daychk[j]=true;
		}
	}
	for(i=60;i<=344;i++){
		if(!daychk[i]) return false;
	}
	return true;
}
void back(int n,int chkcnt){
	if(chkcnt>min) return;//가지치기
	if(n>N){
		if(ok()){
			zerochk=true;
			if(min>chkcnt) min=chkcnt;
			return ;
		}
	}
	chk[n+1]=false;
	back(n+1,chkcnt);
	chk[n+1]=true;
	back(n+1,chkcnt+1);
	return;
}
int main(void){
	int i,j,a,b,c,d,num=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(j=1;j<=a;j++)
			num+=days[j];
		flower[i].st=num+b;
		for(j=1;j<=c;j++)
			num+=days[j];
		flower[i].fi=num+d;
	}
	back(0,0);
	if(!zerochk){
		printf("0\n");
		return 0;
	}
	printf("%d",min);
	return 0;
}



	

