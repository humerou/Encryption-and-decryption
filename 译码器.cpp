// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void creat(char txt[])
{
	printf("������������ܵ�����!\n");
    gets(txt);

	for(int i=0;i<strlen(txt);i++)
	{
		txt[i]+=1245;
	}

	printf("���ܽ����%s\n",txt);
	
}
void tans(char txt[])
{
	printf("������������ܵ�����!\n");
    gets(txt);
	for(int i=0;i<strlen(txt);i++)
	{
		txt[i]-=1245;
	}
	printf("���ܽ����%s\n",txt);

}
int _tmain(int argc, _TCHAR* argv[])
{
	int chois;
	char txt[1024];


	printf("****************************************************\n");
	printf("��ӭʹ����������\n");
	printf("****************************************************\n");
	printf("��������������������1��\n");
    printf("��������������������2��\n");
	printf("�˳�������0\n");
	scanf("%d",&chois);
	fflush(stdin);
	while(1)
	{	
		switch(chois)
		{
		case 1:
            creat(txt);
			break;
		case 2:
			tans(txt);
			break;
		case 0:
			printf("�˳��ɹ���\n");
			exit(0);
			break;
		default:
			printf("������������\n");
			break;
		}
		system("pause");
	}

	return 0;
}

