#include<stdio.h> 

int main()
{
	
	int i=0;
	//列出1到100的数 
	for (i=2;i<=100;i++)
	{
	 //用作判断
	 int pand=1;
	 //用作取模 
	 int chu=0;
	 //记录素数个数 
	 int s=0; 
		for (chu=2;chu<=i-1;chu++)
		{
			//判断
			 if(i%chu==0)
			{
				pand=0;
				 break; 
			 } 
		 }
	 //判断 
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
