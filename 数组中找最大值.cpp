#include<stdio.h>
int main()
{
	int add[10]={0}; 
	int z=0;
	for(z=0;z<10;z++)
	{
		scanf("%d",&add[z]);
	 } 
	int l=add[0];
	for(z=1;z<=9;z++)
	{
		 if(l<add[z])
		 {
		 	l=add[z];
		 }
	}
	 printf("%d\n",l);
	 printf("%d\n",add[9]);
	return 0;
}
