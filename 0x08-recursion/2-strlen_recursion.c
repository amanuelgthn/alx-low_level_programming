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
	int i = 0;
	
	if (*s != '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
