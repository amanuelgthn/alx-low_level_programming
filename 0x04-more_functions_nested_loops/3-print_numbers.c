#include"main.h"
/**
*print_numbers-print numbers from 0 to 9 followed by new line
**/
void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
