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
			printf("�´���\n"); 
		}
		else if(cai<s)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break; 
		}
	}
	
}
void biaoti()
{
	printf("*****************************\n");
	printf("***********1��play***********\n");
	printf("***********0��end************\n");
	printf("*****************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
		int a=0;
	do
	{
		biaoti();
		printf("��������ľ���1/0\n");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
		{
			
			printf("��Ϸ��ʼ\n");
			youxi() ;
			break; 
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("�����ʽ��������ѡ��\n");
			break;
		} 
	}
    }while(a);
	return 0;
}
