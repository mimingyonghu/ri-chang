#include<stdio.h> 

int main()
{
	
	int i=0;
	//�г�1��100���� 
	while (1)
	{
	 //�����ж�
	 int pand=1;
	 //����ȡģ 
	 int chu=0;
		for (chu=2;chu;chu+=2)
		{
			//�ж�
			 if(i%chu==0)
			{
				pand=0;
				 break; 
			 } 
		 }
	 //�ж� 
	  if(pand==1) 
	 printf("%d ",i) ;
	 }
 return 0; 
}
