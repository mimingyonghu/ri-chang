#include "未命名3.h"


void youxi()
{
	//设置数组二维 
	char ge[Y][X]={0};
	//设置判断变量 
	int p=2;
	//初始化棋盘 
	chushi(ge,X,Y);
	//打印棋盘 
	dyt(ge,X,Y);
	//输入 
	while(1)
	{
		//玩家输入 
		wjsr(ge,X,Y);
	    dyt(ge,X,Y);
	    p=pd(ge,X,Y);
	    if(p!=0)
	    break;
	    //电脑输入 
	    dnsr(ge,X,Y);
	    dyt(ge,X,Y);
	    p=pd(ge,X,Y);
	    if(p!=0)
	    break;
	 } 
	 if(p=='*')
	 {
	 	printf("***************\n****玩家胜!****\n***************\n");
	 }
	 else if(p=='#')
	 {
	 	printf("***************\n****电脑胜?!!**\n***************\n");
	  } 
	  else
	  {
	  	printf("*******\n*平-局*\n*******\n"); 
	  }
}





int main() 
{
	//设置随机值
	srand((unsigned int)time(NULL)); 
	int xh=0; 

	do
	{
		biaoti();
		printf("请输入:>\n");
		scanf("%d",&xh);
		switch(xh)
		{
			case 1:
				{
					youxi();
					//printf("play\n");
					printf("游戏结束，是否重新开始\n");
					break;
				}
			case 0:
				{
					printf("-退出游戏-\n");
					break; 
				}
			default:
			{
				printf("输入违规，重新输入!!!\n");
				break;
			}
			
		}
	 } while(xh);
	
	return 0;
}
