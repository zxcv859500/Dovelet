#include<stdio.h>
int main(void){
	float elec[4]={2.5,2.0,0.5},fuse_e[4];
	int i,fuse[4]={0,},result=0;
	for(i=1;i<=3;i++) scanf("%d",&fuse[i]);
	fuse_e[1]=fuse[1]*elec[1];
	fuse_e[2]=fuse[2]*elec[2];
	fuse_e[3]=fuse[3]*elec[3];
	for(i=1;i<=3;i++)
		result+=fuse_e[i];
	result*=2;
	for(i=10;i<=result;i+=10);
	printf("%d amperes",i);
	return 0;
}
