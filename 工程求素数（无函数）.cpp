#include<stdio.h> 

int main()
{
	
	int i=0;
	//列出1到100的数 
	while (1)
	{
	 //用作判断
	 int pand=1;
	 //用作取模 
	 int chu=0;
		for (chu=2;chu;chu+=2)
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
	 printf("%d ",i) ;
	 }
 return 0; 
}
