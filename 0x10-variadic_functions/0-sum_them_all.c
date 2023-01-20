#include<stdio.h>
/**
*sum_them_all - function to sum all the arguments given
*@n:number of arguments
*Return:sum of the arguments or 0 if no arguments
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arglist;

	if (n == 0)
	{
		return (0);
	}
	va_start(arglist, n);
	
	for (;i < n; i++)
	{
		sum = sum + va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
