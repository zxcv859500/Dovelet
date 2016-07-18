#include<stdio.h>
int i,j;
void swap(void){
	int temp;
	temp=i;
	i=j;
	j=temp;
}
int main(void){
	int temp_i,temp_j,result_1,result_2;
	scanf("%d %d",&i,&j);
	temp_i=i;
	temp_j=j;
	if(i<j) swap();
	while(1){
		i-=j;
		if(i<j) swap();
		if(i==j){
			result_1=i;
			break;
		}
	}
	result_2=(temp_i/result_1)*(temp_j/result_1)*result_1;
	printf("%d %d\n",result_1,result_2);
	return 0;
}

	



	

