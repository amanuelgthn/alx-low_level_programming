#include"main.h"
/**
*more_more_numbers-print numbers from 0 to 14,10 times
**/
void more_more_numbers(void)
{
	int i = 0;

	for (; i < 15; i++)
	{
		if(i / 10 > 0)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
/**
*more_numbers-print numbers from 0 to 14,10 times
**/
void more_numbers(void)
{
	int i = 1;

	for (; i < 11; i++)
	{
		more_more_numbers();
	}
}
