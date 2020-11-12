#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("请输入十个数字，中间用空格键隔开\n");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for(j=0;j<9;j++)            //进行9次循环，实现9趟比较
		for(i=0;i<9-j;i++)      //每一趟实现9-j次比较
			if(a[i]<a[i+1])
		{
			t=a[i];              //相邻两个数互换
			a[i]=a[i+1];
			a[i+1]=t;
		}
			for(i=0;i<=9;i++)
				printf("%d ",a[i]);
			printf("\n");
			return 0;

}