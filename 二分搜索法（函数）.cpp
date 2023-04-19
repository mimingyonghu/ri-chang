#include<stdio.h>

int hanshu(int number,int grp[],int k)
 {
	int right = number - 1;
	int left = 0;
	//int medial=left+(right-left)/2;
	while(left<=right)
  {
  	int medial=left+(right-left)/2;
	if(grp[medial]<k)
	{
		left=medial + 1;
	}
	else if(grp[medial]>k)
	{
		right=medial - 1;
	}
	else
	{
		return medial;
    }
	
  }
  return -1;
}


int main()
{
	//设置数组 
	int grp[]={1,2,3,4,5,6,7,8,9,10};
	//数组元素个数 
	int number=sizeof(grp)/sizeof(grp[0]);
	//要查的数 
	int k=0;
	scanf("%d",&k);
	//函数 
	int jie=hanshu(number,grp,k);
	//判断 
	if(jie== -1)
	{
		printf("找不到");
	}
	else
	{
		printf("下标=%d\n",jie);
	}
		
	return 0;
 } 
