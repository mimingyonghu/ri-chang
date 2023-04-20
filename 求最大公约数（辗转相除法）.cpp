#include<stdio.h> 
int main()
{
	int a=0;
	int b=0;
	int c=1;
	scanf("%d %d",&a,&b); 
	//while(c)
	{
	//	c=a%b;
	//	a=b;
	//	b=c;
	}
	//	while(a%b)
	{
	//	c=a%b;
	//	a=b;
	//	b=c;
	}
		while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d",b);
	//printf("%d\n",a);
	return 0;
}
