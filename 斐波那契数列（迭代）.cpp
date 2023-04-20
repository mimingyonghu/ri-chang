#include<stdio.h>
int main()
{
	int c=0;
	scanf("%d",&c);
	int z=1;
	if(c>2)
	{
		int a=1;
		int b=1;
		while(c>2)
		{
			c--;
			z=a+b;
			a=b;
			b=z;
		}
		printf("%d",z);
	}
	else
	{
		printf("%d",z);
	}
	return 0;
 } 
