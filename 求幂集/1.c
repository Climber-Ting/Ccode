#include<stdio.h>
#include<string.h>
void Print(char *str,int k)
{
	char temp;
	int i;
	if(k==strlen(str))
	{
		printf("(");
		for(i=0;i<k;i++)
			if(str[i]!=(-1))
				printf("%c",str[i]);
			printf(")\n");
				}
	else
	{
		Print(str,k+1);  /*��һ����ĸ��ʾ��ĺ�����ĸ��*/
		temp=str[k];
		str[k]=(-1);    /*���õ�һ����ĸ����ʾ*/
		Print(str,k+1);  /*��һ����ĸ����ʾʱ�ĺ�����ĸ��*/
		str[k]=temp;     /*�ָ���һ����ĸ����*/
	}
}

int main(void)
{
	char str[100];
	printf("����������Ԫ�أ��м䲻Ҫ�Կո����\n");
	scanf("%s",&str);
	Print(str,0);
	return 0;
}
