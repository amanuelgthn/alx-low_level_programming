#include <stdio.h>
/**
 *print_sign- a function that checks for lowercase character.
 *@n: number
 *Return: Description of the returned value
**/
int print_sign(int n)
{
	if (n > 0)
	{
		return(putchar('+'));
	}
	{
		return(1);
	}
	else if (n == 0)
	{
		return(0);
	}
	else
	{
		return(-1);
	}
}
