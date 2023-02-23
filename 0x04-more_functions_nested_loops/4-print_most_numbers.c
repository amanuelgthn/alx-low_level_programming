#include"main.h"
/**
*print_most_numbers-print numbers from 0 to 9 except for 2 and 4
**/
void print_most_numbers(void)
{
	int i = 0;
	
	for (; i <10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
