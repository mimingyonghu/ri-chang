#include<stdio.h>

int fbnq(int g)
{
	if(g<=2)
	{
		return 1; 
	}
	else
	{
		return fbnq(g-1)+fbnq(g-2);
	}
}

int main()
{
	int g=0;
	scanf("%d",&g);
	int q=fbnq(g);
	printf("%d\n",q);
	return 0;
}
