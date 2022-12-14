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
		return(1);
		putchar('+');
	}
	else if (n == 0)
	{
		return(0);
		putchar(0 + '0');
	}
	else
	{
		return(-1);
		putchar('-');
	}
}
