#include<stdio.h>
void hanshu(int add[],int a)
{
	int b=0;
	int c=0;
	int d=0; 
	for(b=0;b<a-1;b++)
	{

		for(c=0;c<a-1-b;c++)
		{
		 if(add[c]>add[c+1])
		 {
			d=add[c];
			add[c]=add[c+1];
			add[c+1]=d;
		 }
	    }
		
	}
}
int main()
{
	int add[]={4,3,4,7,5,6,8,8,1,7};
	int a=sizeof(add)/sizeof(add[0]);
	hanshu(add,a);
	int m=0;
	for(m=0;m<10;m++)
	{
	printf("%d ",add[m]);
    }
	return 0;
 } 
