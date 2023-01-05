#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 *_strlen_recursion- print with recurssion
 *@s: string which length to be returned
 *Return: length of string sucess
 **/
int _strlen_recursion(char *s)
{
	int i;
	
	if (*s == '\0')
		{
			_putchar('\n');
		}
		else
		{
			_strlen_recursion(s + 1);
		}
		if (*s != '\0')
		{
			i++;
			return (i);
		}
	}
}
