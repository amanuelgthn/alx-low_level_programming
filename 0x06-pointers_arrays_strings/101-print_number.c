#include"main.h"
/**
*print_number-print number passed to function
*@n:number to be printed
**/
void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	while (n > 0)
	{
		num = n % 10;
		n = n / 10;
		if (num == 0 && n < 10)
		{
			_putchar(n + '0');
			_putchar(num + '0');
			break;
		}
		else
		{
			print_number(n);
		}
	}
}
