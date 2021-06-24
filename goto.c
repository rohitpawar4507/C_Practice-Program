//got statements

// WAP to print any number from 1 to 10 without used of loop.

#include<stdio.h>
main()
{
	int i=1;
	L:
		if(i<=10)
		{
			printf("\n %d",i++);
			goto L;
		}
		printf("\n Control reaches here.!");
}

