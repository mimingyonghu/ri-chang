#include<stdio.h> 

int main()
{
	
	int i=0;
	//�г�1��100���� 
	for (i=2;i<=100;i++)
	{
	 //�����ж�
	 int pand=1;
	 //����ȡģ 
	 int chu=0;
	 //��¼�������� 
	 int s=0; 
		for (chu=2;chu<=i-1;chu++)
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
	  {	  	
	 s++;
	 printf("%d ",i);
	  }
      if(s==10)
      {
      break;
      }
	 }
 return 0; 
}
