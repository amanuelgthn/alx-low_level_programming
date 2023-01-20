#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
*print_all - function to print all the arguments given followed by newline
*@format:separator
*Return: arguments or 0 if no arguments
**/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *separator;
	va_list args;

	va_start(args, format);

	separator = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");

	va_end(args);
}
