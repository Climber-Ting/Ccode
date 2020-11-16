#include<stdio.h>
int ext(int p,int q);
int con(int p,int q);
int inc(int p,int q);
int main(void)
{
	int p,q;
	do
	{
		printf("输入p，q的真值");
		scanf("%d%d",&p,&q);
	}
	while(p!=1&&p!=0||q!=1&&q!=0);
	printf("p析取q=%d\n",ext(p,q));
	printf("p合取q=%d\n",con(p,q));
	printf("p蕴含q=%d\n",inc(p,q));
	printf("q等价q=%d\n",con(inc(p,q),inc(q,p)));
	return 0;
}

int ext(int p,int q)     /*计算析取函数*/
{
	if(p==1||q==1)
		return 1;
	else
		return 0;
}

int con(int p,int q)    /*计算合取函数*/
{
	if(p==1&&q==1)
		return 1;
	else
		return 0;
}

int inc(int p,int q)    /*计算蕴含函数*/
{
	return ext(!p,q);
}