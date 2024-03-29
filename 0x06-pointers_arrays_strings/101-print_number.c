#include"main.h"
/**
*print_number-print number passed to function
*@n:number to be printed
**/
void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0 || n == INT_MIN)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else if (n > 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		num = n % 10;
		n = n / 10;
		if (n < 10)
		{
			_putchar(n + '0');
			_putchar(num + '0');
		}
		else
		{
			print_number(n);
			_putchar(num + '0');
		}
	}
}
