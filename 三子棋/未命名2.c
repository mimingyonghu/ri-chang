#include "δ����3.h" 



//��ʼ������ 
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



//��ӡ���� 
void biaoti()
{
	printf("**************************\n");
	printf("******1:play 0:end********\n");
	printf("**************************\n");
}



//��ӡ���� 
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



//�������
void wjsr(char ge[Y][X],int x,int y)
{
	int a=0;
	int b=0;
	
	while(1)
	{
		printf("�������������\n");
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
			    printf("������������ѱ�ռ�ã����������롣\n");
			
		    }
		    printf;
	    }
	    else
	    {
		    printf("������ĵ�ַ��������!���������롣\n");
		
	    }
	
    }  
}



//��������
void dnsr(char ge[Y][X],int x,int y)
{
	printf("�����ǵ��Եľ���\n");
	
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
		//�� 
		}
		
	}
	
 } 
 
 
 
 //�ж���Ӯ
 int pd(char ge[Y][X],int x,int y)
 { 
 	int a=0;
 	int b=0;
 	int c=1;
 	
 	
 	//���ж� 
 	for(a=0;a<y;a++)
 	{
 		if(ge[a][0]==ge[a][1]&&ge[a][1]==ge[a][2]&&ge[a][1]!=' ')
 		{
 			//printf("hs");
 			return ge[a][1];
 			
		 }
	 }
	 
	 
	 //���ж� 
	 for(b=0;b<x;b++)
	 {
	 	if(ge[0][b]==ge[1][b]&&ge[1][b]==ge[2][b]&&ge[1][b]!=' ')
	 	{
	 		//printf("ls") ;
	 		return ge[1][b];
		 }
	 }
	 
	 
	 //б�ж�
	 if(ge[0][0]==ge[1][1]&&ge[1][1]==ge[2][2]&&ge[1][1]!=' ')
	 {
	 	return ge[1][1];
	  } 
	 if(ge[0][2]==ge[1][1]&&ge[1][1]==ge[2][0]&&ge[1][1]!=' ')
	 {
	 	return ge[1][1];
	 }
	 
	 
	 //�ж��Ƿ�ƽ��
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























