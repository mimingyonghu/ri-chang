#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void youxi()
{
	int s=rand()%100+1;
	//printf("%d",s);
	while(1)
	{
		int cai=0;
		scanf("%d",&cai);
		if(cai>s)
		{
			printf("猜大了\n"); 
		}
		else if(cai<s)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break; 
		}
	}
	
}
void biaoti()
{
	printf("*****************************\n");
	printf("***********1：play***********\n");
	printf("***********0：end************\n");
	printf("*****************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
		int a=0;
	do
	{
		biaoti();
		printf("请输入你的决定1/0\n");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
		{
			
			printf("游戏开始\n");
			youxi() ;
			break; 
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入格式错误！重新选择\n");
			break;
		} 
	}
    }while(a);
	return 0;
}
