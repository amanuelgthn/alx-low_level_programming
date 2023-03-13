#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *str_slice(char *src)
{
	int i = 1;
	int len = strlen(src);
	char *dest;

	dest = malloc(sizeof(char) * (len - 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (; i < len - 1; i++)
	{
		dest[i - 1] = src[i];
	}
	return dest;
}
/**
*is_palindrome- function for checking if a string is palindrome
*@s: string to be checked
*Return: 1 if the string is palindrome or 0 if nor
**/
int is_palindrome(char *s)
{
	int len = strlen(s);
	
	if (len == 0)
	{
		return (1);
	}
	else if (len % 2 == 0)
	{
		return (0);
	}
	else if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		is_palindrome(str_slice(s));
	}
}
