int main()
{
	typedef struct
	{
		string num[50];
		string name[50];
		char classNum[50];
		int length;
	}seqlist;                       //����һ��˳���
	sqelist L;                 //����10���˵���Ϣ
	for(int i=0;i<10;i++)
	{
		scanf("%s",L.num);
		scanf("%s",L.name);
		scanf("%s",L.classNum);
	}
	L.length=10;                 //���������˵���Ϣ
	for(int j=0;j<10;j++)
	{
		if(j==4)
			printf("%s/n%s/n%s/n",L.num[i],L.name[i],L.Num[i]);
	}
	return 0;
