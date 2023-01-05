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
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + _strlen_recursion(s +1);
	}
}
