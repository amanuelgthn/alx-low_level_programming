#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 *_puts_recursion- print with recurssion
 *@s: string to be printed 
 *Return: 0 sucess
 **/
void _puts_recursion(char *s)
{
	{
		_putchar(*s);
		if(*s == '\0')
		{
			return;
		}
		else
		{
			_puts_recursion(s + 1);
		}
	}
}
