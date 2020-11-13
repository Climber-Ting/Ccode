#include<stdio.h>
int main() 
{
	int max(int x,int y);
	int a,b,c,d;
	printf("请输入三个数字，中间用“，”隔开\n");
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b);
	if(d<c)
		d=c;
	else if(d>c)
		return(d);
	printf("max=%d\n",d);
	return 0;
}

int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}
