#include<stdio.h>
int main()
{
	int i,sum,n;
	i=1;
	sum=0;
	printf("������n��ֵ��");
	scanf("%d",&n);
	do
	{
		i++;
		sum+=i;
	}
	while(i<=n);
	printf("ǰn���Ϊ:%d\n",sum);


}