#include<stdio.h>


int hanshu(int x )
{
    int s=0;
	for(s=2;s<=x-1;s++)
	{
		if(x%s==0)
		{
		return 0;	
		}
	}
	return 1; 
}


int main()
{
	int i=0;
	for(i=2;i<=100;i++)
	{
		if(hanshu(i))
		printf("%d \n",i);
	}
	
	
	return 0;
}
