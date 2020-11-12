#include<stdio.h>
int main()
{
	int sum=0,f=1;
	int i,n;
	printf("输入n的值:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
		sum+=f;
	}
	printf("前n项阶乘之和为：%d\n",sum);

}