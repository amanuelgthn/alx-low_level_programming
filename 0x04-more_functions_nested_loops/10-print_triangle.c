#include"main.h"
/**
*print_triangle- print a trinagle using the character #
*@size:size of the trinagle to be printed
**/
void print_triangle(int size)
{
	int i = 0, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if (i + j < size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
