#include"main.h"
/**
*print_diagonal-print the character / in diagonal
*@n:length of the diagonal
**/
void print_diagonal(int n)
{
	int i = 0, j;
	
	for (; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j < i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if(i != 0)
		{
			_putchar('\n');
		}
	}
}
