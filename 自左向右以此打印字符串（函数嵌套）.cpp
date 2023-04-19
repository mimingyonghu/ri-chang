#include<stdio.h>

void hanshu(unsigned int n)
{
	if(n>9)
	{
		hanshu(n/10);
	}
		printf("%d\n",n%10);
	
}

 int main()
 {
 	unsigned int z = 0;
 	scanf("%u",&z);
 	hanshu(z);
 	return 0;
 }
