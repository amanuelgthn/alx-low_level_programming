#include"main.h"
#include<stdio.h>
#include<string.h>
char *str_slice(char *src)
{
    size_t i;

   for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

   return dest;
}
/**
*is_palindrome- function for checking if a string is palindrome
*@s: string to be checked
*Return: 1 if the string is palindrome or 0 if nor
**/
int is_palindrome(char *s)
{
	
