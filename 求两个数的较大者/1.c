#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,d;
	printf("请输入两个数字，中间用“，”隔开\n");
	scanf("%d,%d",&a,&b);
	d=max(a,b);
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

