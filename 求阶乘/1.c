#include<stdio.h>
int main()
{
	int sum=0,f=1;
	int i,n;
	printf("����n��ֵ:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
		sum+=f;
	}
	printf("ǰn��׳�֮��Ϊ��%d\n",sum);

}