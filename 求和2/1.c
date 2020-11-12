#include<stdio.h>
int main()
{
	int i,sum,n;
	i=1;
	sum=0;
	printf("请输入n的值：");
	scanf("%d",&n);
	do
	{
		i++;
		sum+=i;
	}
	while(i<=n);
	printf("前n项和为:%d\n",sum);


}