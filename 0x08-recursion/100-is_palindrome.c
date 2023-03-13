#include"main.h"
#include<stdio.h>
#include<string.h>
char *str_slice(char *src)
{
	int i = 1;
	int len = strlen(src);
	char *dest[len - 2];

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
