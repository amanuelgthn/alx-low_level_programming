#include"main.h"
/**
*print_diagonal-print the character / in diagonal
*@n:length of the diagonal
**/
void print_diagonal(int n)
{
	int i = 0;
	
	for (;i < n; i++)
	{
		if (i < n - 1)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\\');
		}
	}
}
