#include "未命名3.h" 



//初始化棋盘 
void chushi(char ge[Y][X],int x,int y)
{
	int j=0;
	int k=0;	
	for(j=0;j<y;j++)
	{
		for(k=0;k<x;k++)
		{
			ge[j][k]=' ';
		}
	}
}



//打印标题 
void biaoti()
{
	printf("**************************\n");
	printf("******1:play 0:end********\n");
	printf("**************************\n");
}



//打印棋盘 
void dyt(char ge[Y][X],int x,int y)
{
	int j=0;
	int k=0;
	for(j=0;j<y;j++)
	{
		for(k=0;k<x;k++)
		{
			printf(" %c ",ge[j][k]);
			if(k<x-1)
			printf("|");
		}
		printf("\n");
		for(k=0;k<x;k++)
		{
			if(j<y-1)
			printf("---");
		    if(j<y-1&&k<x-1) 
		    printf("|");
		}
		printf("\n");
		
    }
}



//玩家输入
void wjsr(char ge[Y][X],int x,int y)
{
	int a=0;
	int b=0;
	
	while(1)
	{
		printf("请玩家输入坐标\n");
	    scanf("%d %d",&a,&b);
		if(a<y+1&&b<x+1&&a>0&&b>0)
	    {
		    if(ge[a-1][b-1]==' ')
		    {
			    ge[a-1][b-1]='*';
			    break;
			    printf;
		    }
		    else
		    {
			    printf("您输入的坐标已被占用，请重新输入。\n");
			
		    }
		    printf;
	    }
	    else
	    {
		    printf("您输入的地址超出棋盘!请重新输入。\n");
		
	    }
	
    }  
}



//电脑输入
void dnsr(char ge[Y][X],int x,int y)
{
	printf("下面是电脑的决定\n");
	
	while(1)
	{
		int a=rand()%x;
		int b=rand()%y;
		if(ge[b][a]==' ')
		{
			ge[b][a]='#';
			break;
		}
		else
		{ 
		//空 
		}
		
	}
	
 } 
 
 
 
 //判断输赢
 int pd(char ge[Y][X],int x,int y)
 { 
 	int a=0;
 	int b=0;
 	int c=1;
 	
 	
 	//行判断 
 	for(a=0;a<y;a++)
 	{
 		if(ge[a][0]==ge[a][1]&&ge[a][1]==ge[a][2]&&ge[a][1]!=' ')
 		{
 			//printf("hs");
 			return ge[a][1];
 			
		 }
	 }
	 
	 
	 //列判断 
	 for(b=0;b<x;b++)
	 {
	 	if(ge[0][b]==ge[1][b]&&ge[1][b]==ge[2][b]&&ge[1][b]!=' ')
	 	{
	 		//printf("ls") ;
	 		return ge[1][b];
		 }
	 }
	 
	 
	 //斜判断
	 if(ge[0][0]==ge[1][1]&&ge[1][1]==ge[2][2]&&ge[1][1]!=' ')
	 {
	 	return ge[1][1];
	  } 
	 if(ge[0][2]==ge[1][1]&&ge[1][1]==ge[2][0]&&ge[1][1]!=' ')
	 {
	 	return ge[1][1];
	 }
	 
	 
	 //判断是否平局
	 for(a=0;a<y;a++)
	 {
	 	for(b=0;b<x;b++)
	 	{
	 		if(ge[a][b]==' ')
	 		{
	 			c=0;
	 			//printf(".");
			 }
		 }
	  } 
 return c;
  } 























