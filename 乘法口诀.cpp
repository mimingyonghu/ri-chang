#include<stdio.h>
int main()
{
	int a=0;
	for(a=1;a<=9;a++)
	{
		int b=0;
		for(b=1;b<=a;b++)
		{
			//-2%d�ǲ������Զ�����ں���һ���ո�2��Ϊǰ�� 
		printf("%d*%d=%-2d\t",b,a,a*b); 
		}
		printf("\n");
	}
	return 0;
 } 
