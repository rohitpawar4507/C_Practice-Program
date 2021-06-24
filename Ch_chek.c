// WAP to test whether a given character is digt , uppercase letter, lowercase or special character

#include<stdio.h>
main()
{
	char ch;
	printf("]n Enter a character: ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("\n%c is lowercase letter with ASCII %d ",ch,ch);
	}
	else if(ch>='A'&& ch<='Z')
	{
		printf("\n %c is Uppercase letter with ASCII %d ",ch,ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n %c is a digit with ASCII %d",ch,ch);
	}
	else
	{
		printf("\n %c is special character %d:",ch,ch);
	}
}
