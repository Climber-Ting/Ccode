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
		printf("����p��q����ֵ\n");
		scanf("%d,%d",&p,&q);
	}
	while(p!=1&&p!=0||q!=1&&q!=0);
	printf("p��ȡq=%d\n",ext(p,q));
	printf("p��ȡq=%d\n",con(p,q));
	printf("p�̺�q=%d\n",inc(p,q));
	printf("q�ȼ�q=%d\n",icn(p,q));
	return 0;
}

int ext(int p,int q)     /*������ȡ����*/
{
	if(p==1||q==1)
		return 1;
	else
		return 0;
}

int con(int p,int q)    /*�����ȡ����*/
{
	if(p==1&&q==1)
		return 1;
	else
		return 0;
}

int inc(int p,int q)    /*�����̺�����*/
{
	if(p==1&&q==0)
		return 0;
	else
		return 1;
}

int icn(int p,int q)    /*����ȼۺ���*/
{
	if(p==q)
		return 1;
	else 
		return 0;
}
