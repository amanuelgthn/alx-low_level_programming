#include"main.h"
/**
*print_number- function to print numer
*@n:number to be printed
**/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	if ( n != 0)
	{
		_putchar(n % 10 + '0');
	}
}
