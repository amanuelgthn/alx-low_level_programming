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
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0 + '0');
		return (1);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
