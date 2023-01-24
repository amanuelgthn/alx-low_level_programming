#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#inculde<stdlib.h>
void _printf(char* format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;
	
	va_list arg;
	va_start(arg, format);
	
	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		traverse++;
		switch(traverse)
		{
			case 'c' : i = va_arg(arg,int);
				putchar(i);
				break;
			
			case 'd' : i = va_arg(arg,int);
				if(i < 0)
				{
					i = -i;
					putchar('-');
				}
				puts(convert(i,10));
				break;
		}
	}
}
char *convert(unsigned int num, int base)
{
	static char representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;
	
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = representation[num%base];
		num /= base;
	}
	while(num != 0);
	
	return(ptr);
}
