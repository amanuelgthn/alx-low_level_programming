#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 *_strlen_recursion- print with recurssion
 *@s: string which length to be returned
 *Return: 0 sucess
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
