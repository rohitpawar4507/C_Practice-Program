#include<stdio.h>
main()
{
	int ch ='Sairam';
	
	L:
		if(ch<=10)
		{
			printf("\n %c ",ch++);
			goto L;
		}
	
}
