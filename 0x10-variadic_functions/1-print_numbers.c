#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
*print_numbers - function to print all the arguments given followed by newline
*@n:number of arguments
*Return: arguments or 0 if no arguments
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;
	
	va_start(num, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < n -1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}
