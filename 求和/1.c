#include<stdio.h>
int main()
{
	int i,sum,n;
	i=1;
	sum=0;
	printf("������n��ֵ:");
	scanf("%d",&n);
	while(i<=n)
	{
		i++;
		sum+=i;
	}
	printf("ǰn���Ϊ��%d\n",sum);

}