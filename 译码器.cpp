// 译码器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//编辑加密函数create()

void creat(char txt[])
{
	printf("请输入你想加密的数据!\n");
    gets(txt);

	for(int i = 0;i < strlen(txt);i++)
	{
		txt[i]+=1245;
	}

	printf("加密结果：%s\n",txt);
	
}
//编辑解密函数
void tans(char txt[])
{
	printf("请输入你想解密的数据!\n");
    gets(txt);
	for(int i = 0;i < strlen(txt);i++)
	{
		txt[i]-=1245;
	}
	printf("解密结果：%s\n",txt);

}
int _tmain(int argc, _TCHAR* argv[])
{
	int chois;
	char txt[1024];


	printf("****************************************************\n");
	printf("欢迎使用译码器！\n");
	printf("****************************************************\n");
	printf("如果你想加密文字请输入1！\n");
    printf("如果你想解密文字请输入2！\n");
	printf("退出请输入0\n");
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
			printf("退出成功！\n");
			exit(0);
			break;
		default:
			printf("您的输入有误！\n");
			break;
		}
		system("pause");
	}

	return 0;
}

