#include <stdio.h>
#include "main.h"
/**
*print_last_digit - prints last digit of the number
*@n:variable input
*Return:value of last digit
 **/
int print_last_digit(int n)
{
	int x;
	int y;

	if (n >= 0)
	{
		y = n;
	}
	else
	{
		y = -n;
	}

	x = y % 10;
	_putchar(x + '0');
	return (x);
}
