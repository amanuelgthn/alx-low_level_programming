#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_print_rev_recursion- print string in reverse using recursion
*@s: string to be printed in reverse order
*Return: 0 sucess
**/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
