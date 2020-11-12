#include<stdio.h>
int ext(int p,int q);
int con(int p,int q);
int inc(int p,int q);
int icn(int p,int q);
int main(void)
{
	int p,q;
	do
	{
		printf("输入p，q的真值\n");
		scanf("%d,%d",&p,&q);
	}
	while(p!=1&&p!=0||q!=1&&q!=0);
	printf("p析取q=%d\n",ext(p,q));
	printf("p合取q=%d\n",con(p,q));
	printf("p蕴含q=%d\n",inc(p,q));
	printf("q等价q=%d\n",icn(p,q));
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
	if(p==1&&q==0)
		return 0;
	else
		return 1;
}

int icn(int p,int q)    /*计算等价函数*/
{
	if(p==q)
		return 1;
	else 
		return 0;
}
