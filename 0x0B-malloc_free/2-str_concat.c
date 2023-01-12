#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*str_concat-returns a pointer to new string which is duplicate of string str
*@s1:string to be duplicated
*@s1:string to be duplicated
*Return: a pointer to a new string which is a duplicate of str upon sucess
**/
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = strlen(str);
		string = malloc(sizeof(char) * i + 1);
		for (j = 0; j < i; j++)
		{
			string[j] = str[j];
		}
		if (string == NULL)
		{
			return (NULL);
		}
		else
		{
			return (string);
		}
	}
}
