#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,d;
	printf("�������������֣��м��á���������\n");
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

