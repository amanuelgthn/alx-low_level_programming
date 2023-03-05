#include"main.h"
/**
*print_number-print number passed to function
*@n:number to be printed
**/
void print_number(int n)
{
  	unsigned int i = 0;
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
		num = n / 10;
		if (num < 1)
		{
			num = n % 10;
			_putchar(num + '0');
			break;
		}
		else
		{
			print_number(num);
		}
	}
			
}