#include "δ����3.h"


void youxi()
{
	//���������ά 
	char ge[Y][X]={0};
	//�����жϱ��� 
	int p=2;
	//��ʼ������ 
	chushi(ge,X,Y);
	//��ӡ���� 
	dyt(ge,X,Y);
	//���� 
	while(1)
	{
		//������� 
		wjsr(ge,X,Y);
	    dyt(ge,X,Y);
	    p=pd(ge,X,Y);
	    if(p!=0)
	    break;
	    //�������� 
	    dnsr(ge,X,Y);
	    dyt(ge,X,Y);
	    p=pd(ge,X,Y);
	    if(p!=0)
	    break;
	 } 
	 if(p=='*')
	 {
	 	printf("***************\n****���ʤ!****\n***************\n");
	 }
	 else if(p=='#')
	 {
	 	printf("***************\n****����ʤ?!!**\n***************\n");
	  } 
	  else
	  {
	  	printf("*******\n*ƽ-��*\n*******\n"); 
	  }
}





int main() 
{
	//�������ֵ
	srand((unsigned int)time(NULL)); 
	int xh=0; 

	do
	{
		biaoti();
		printf("������:>\n");
		scanf("%d",&xh);
		switch(xh)
		{
			case 1:
				{
					youxi();
					//printf("play\n");
					printf("��Ϸ�������Ƿ����¿�ʼ\n");
					break;
				}
			case 0:
				{
					printf("-�˳���Ϸ-\n");
					break; 
				}
			default:
			{
				printf("����Υ�棬��������!!!\n");
				break;
			}
			
		}
	 } while(xh);
	
	return 0;
}
