#include<stdio.h>
void dy(char a,char b)
{
	printf(" %c->%c ",a,b);
}
void lj(int s,char a,char b,char c)
{
	if(s==1)
	{
		dy(a,c);
	}
	else
	{
		lj(s-1,a,c,b);
		dy(a,c); 
		lj(s-1,b,a,c);
	}
}
int main()
{
	lj(1,'A','B','C');
	printf("\n");
	lj(3,'A','B','C');
	printf("\n");
	lj(4,'A','B','C');
	printf("\n");
	return 0;
}
