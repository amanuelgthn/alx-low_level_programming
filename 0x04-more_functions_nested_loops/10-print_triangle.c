#include"main.h"
/**
*print_triangle- print a trinagle using the character #
*@size:size of the trinagle to be printed
**/
void print_triangle(int size)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 0; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j < i - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			if (i != 0)
			{
				_putchar('\n');
			}
		}
	}
}
