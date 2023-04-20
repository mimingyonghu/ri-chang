#include<stdio.h>
int main()
{
	int a=0;
	for(a=1;a<=9;a++)
	{
		int b=0;
		for(b=1;b<=a;b++)
		{
			//-2%d是不满二自动填充在后面一个空格2则为前面 
		printf("%d*%d=%-2d\t",b,a,a*b); 
		}
		printf("\n");
	}
	return 0;
 } 
