#include<stdio.h>
#include<stdlib.h>
struct jose              //��������
{
	int no;
	int code;
	struct jose *link;
}jose, *p ,*q,*head;

int main(void) 
{
	int n;		//n���� 
	int i;
	int m;	//��ʼ�������� 
	int j;
	printf("����������n��");	//�����������
	scanf("%d",&n);
	for(i=1;i<=n;i++)       	//����������
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
		printf("�������%d������ֵ��",i);//����ÿ���������е�����ֵ
		scanf("%d",&(p->code));
		p->no=i; 
	 } 
	 p->link=head;		//�γ�ѭ������ 
	 p=head;
	 printf("������m:");
	 scanf("%d",&m);
	 printf("����˳���ǣ�\n");
	 for(j=1;j<=n;j++)	//������˵ı�� 
	 { 
	 	for(i=1;i<m;i++,p=p->link);
	 		m=p->code;
	 		printf("%d ",p->no);
	 		p->no=p->link->no;	//ɾ����m�Ľڵ�
			p->code=p->link->code;
			q=p->link;
			p->link=p->link->link;
			free(q); 
	}
	printf("\n\n");
	system("pause");	//�ȴ���������˳�
	return 0;
}