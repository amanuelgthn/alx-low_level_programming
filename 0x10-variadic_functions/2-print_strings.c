#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
*print_strings - function to print all the arguments given followed by newline
*@n:number of arguments
*@separator:separator
*Return: arguments or 0 if no arguments
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *a;
	va_list strings;

	if (separator == NULL)
	{
		separator = "";
	}
	
	va_start(strings, n);

	for (; i < n; i++)
	{
		a = va_arg(strings, char*);
		if (a == NULL)
		{
			a = "(nil)";
		}
		printf("%s", a);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
