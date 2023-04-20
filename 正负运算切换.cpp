#include<stdio.h>


 int main()
 {
 	int a=0;
 	double b=0;
 	int c=1;
 	for(a=1;a<=100;a++)
 	{
 		b=b+c*1.0/a;
 		c=-c;
	 }
	 printf("%lf",b);
 	return 0;
  } 
