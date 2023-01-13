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
 * string_nconcat- function that  concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n: length of string s2 to be concatenated to s1
 * Return: pointer pointing to the concatenated strings
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
		i = 0;
		str = malloc_checked(sizeof(char) * (n));
	}
	else
	{
		i = strlen(s1);
		str = malloc_checked(sizeof(char) * (i + n));
	}
	k = strlen(s1);
	for (; j < i + n; j++)
	{
		if (j < i)
		{
			str[j] = s1[j];
		}
		else if (j <= k + i)
		{
			str[j] = s2[j - i];
		}
	}
	return (str);
}
