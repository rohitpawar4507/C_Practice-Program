#include<stdio.h>

main() // identifier
{
	int a,b; // a & b variable
	a=2,b=3;

}

void add() // method or function and it is identifier
{
	int c= a+b; //
	printf("Addition is %d", c);
	return c;
}

// 5 Identifiers present in the program
// a,b c -> variable 
// main () and add() 

// white space is not allowed
//valid - abc
//invalid ab c

// Exercise Rule of Identfiers
/*
12ab invalid
ab12 valid
1234 invalid
Xvb  valid
st#  invalid
h,g  invalid
@ms  invalid
A_1234 valid
_s_   valid
_____  valid

a bcd  invalid
 int  invalid
 for  invalid
 ab_1$ valid
*/
