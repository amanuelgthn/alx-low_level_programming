#include<stdio.h>
#include<string.h>
/**
 *_puts_recursion- print with recurssion
 *@s: string to be printed 
 *Return: 0 sucess
 **/
void _puts_recursion(char *s)
{
        int i;

        _putchar(*s);
	i++;
        if(*s != '\0')
	{
		_puts_recursion(*s + 1);
	}
	_putchar('\n');
}

		
