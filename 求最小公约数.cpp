#include<stdio.h> 
int main()
{
	int a=0;
	int b=0;
	int c=1;
	scanf("%d %d",&a,&b); 
	int q=a*b;
		while(c=a%b)
	{
		a=b;
		b=c;
	}
	int z=q/b;
	printf("%d",z);
	return 0;
}
