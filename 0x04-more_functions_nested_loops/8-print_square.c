#include"main.h"
/**
*print_square-print a square of the character # based on given number size
*@size:number for square size
**/
void print_square(int size)
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
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
