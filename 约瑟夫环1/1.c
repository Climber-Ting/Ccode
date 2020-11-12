#include<stdio.h>
#include<stdlib.h>
struct jose              //定义链表
{
	int no;
	int code;
	struct jose *link;
}jose, *p ,*q,*head;

int main(void) 
{
	int n;		//n个人 
	int i;
	int m;	//初始报数上限 
	int j;
	printf("请输入人数n：");	//输入测试人数
	scanf("%d",&n);
	for(i=1;i<=n;i++)       	//建立单链表
	{
	if(i==1)
		{
			head=p=(struct jose*)malloc(sizeof(struct jose));
		}	
	else
		{
		q=(struct jose*)malloc(sizeof(struct jose));
		p->link=q;
		p=q;
		}
		printf("请输入第%d的密码值：",i);//输入每个人所持有的密码值
		scanf("%d",&(p->code));
		p->no=i; 
	 } 
	 p->link=head;		//形成循环链表 
	 p=head;
	 printf("请输入m:");
	 scanf("%d",&m);
	 printf("出列顺序是：\n");
	 for(j=1;j<=n;j++)	//输出各人的编号 
	 { 
	 	for(i=1;i<m;i++,p=p->link);
	 		m=p->code;
	 		printf("%d ",p->no);
	 		p->no=p->link->no;	//删除报m的节点
			p->code=p->link->code;
			q=p->link;
			p->link=p->link->link;
			free(q); 
	}
	printf("\n\n");
	system("pause");	//等待按任意键退出
	return 0;
}