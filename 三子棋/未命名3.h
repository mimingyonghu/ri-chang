#include <stdio.h>
#include<stdlib.h>
#include<time.h>



//游戏大小 
#define Y 3
#define X 3

//初始化整形 
void chushi(char ge[Y][X],int x,int y);

//标题 
void biaoti();

//打印棋盘 
void dyt(char ge[Y][X],int x,int y);

//玩家输入
void wjsr(char ge[Y][X],int x,int y); 

//电脑输入 
void dnsr(char ge[Y][X],int x,int y);

//判段输赢
int pd(char ge[Y][X],int x,int y); 
