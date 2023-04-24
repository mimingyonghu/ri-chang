#include<stdio.h>

int dg(int n)
{
	if(n<=2)
	{
		return n;
	}

	return dg(n-1)+dg(n-2);
 } 



int main()
{
	int n=0;
	scanf("%d",&n);
	int a=dg(n);
	printf("%d\n",a);
	return 0;
 } 
