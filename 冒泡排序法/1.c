#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("������ʮ�����֣��м��ÿո������\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(j=0;j<9;j++)            //����9��ѭ����ʵ��9�˱Ƚ�
		for(i=0;i<9-j;i++)      //ÿһ��ʵ��9-j�αȽ�
			if(a[i]<a[i+1])
		{
			t=a[i];              //��������������
			a[i]=a[i+1];
			a[i+1]=t;
		}
			for(i=0;i<=9;i++)
				printf("%d ",a[i]);
			printf("\n");
			return 0;

}