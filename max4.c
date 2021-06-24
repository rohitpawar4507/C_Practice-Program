// Write a program to find maximum of 4 numbers.

#include<stdio.h>
main()
{
	int a,b,c,d , max;
	printf("Enter four number :\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	max=a;
	//a=1,b=2,c=3,d=3
	
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	if(max<d)
	{
		max=d;
	}
	printf("Max is %d",max);
}
