#include"main.h"
/**
*print_diagonal-print the character / in diagonal
*@n:length of the diagonal
**/
void print_diagonal(int n)
{
	int i = 0, j = 0;
	
	for (;i < n; i++)
	{
		for (;j < i; J++)
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
		_putchar('\n');
	}
}
