#include"main.h"
/**
*print_line-print line at a length of given number n
*@n:length of line 
**/
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
