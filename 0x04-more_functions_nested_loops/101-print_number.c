#include"main.h"
/**
*print_number- function to print numer
*@n:number to be printed
**/
void print_number(int n)
{
	if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('-');
		n = -n;
		_putchar(-n + '0');
	}
}
