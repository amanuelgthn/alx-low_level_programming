#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 * malloc_checked- function that allocates memory using malloc
 * @b: memory size
 * Return: a pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		return (NULL);
		exit(98);
	}
	return (a);
}
/**
 * string_noncat- function that  concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n: length of string s2 to be concatenated to s1
 * Return: pointer pointing to the concatenated strings 
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0;
	char *str;

	i = strlen(s1);
	k = strlen(s2);
	str = malloc_checked(sizeof(char) * (i + n));
	if ( s1 == NUll)
	{
		for (; j < n, j++)
		{
			if (s2 == NULL)
			{
				str[0] = "";
				break;
			}
			else if (s2[j] != '\0')
			{
				str[j] = s2[j];
			}
		}
	}
	else
	{
		for (; j < i + n; j++)
		{
			if ( s1 != '\0')
			{
				str[j] = s1[j];
			}
			else
			{
				str[j] = s2[j];
			}
		}
	}
	return (str);
}
	
