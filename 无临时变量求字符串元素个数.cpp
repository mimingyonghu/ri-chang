#include <stdio.h>

int hanshu(char arr[])
{
	if(arr[0]!='\0')
	{ 
		return 1+hanshu(arr+1);
	}
	else
	{
	return 0;
	}
}
int main()
{
	char arr[]="abcde";
	int count=hanshu(arr);
	printf("%d\n",count);
	printf("1");
	return 0;
}
