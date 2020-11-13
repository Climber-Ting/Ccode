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
		Print(str,k+1);  /*第一个字母显示后的后续字母集*/
		temp=str[k];
		str[k]=(-1);    /*设置第一个字母不显示*/
		Print(str,k+1);  /*第一个字母不显示时的后续字母集*/
		str[k]=temp;     /*恢复第一个字母数据*/
	}
}

int main(void)
{
	char str[100];
	printf("请连续输入元素，中间不要以空格隔开\n");
	scanf("%s",&str);
	Print(str,0);
	return 0;
}
