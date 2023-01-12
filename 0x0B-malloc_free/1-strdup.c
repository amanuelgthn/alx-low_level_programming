#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*_strdup-returns a pointer to new string which is duplicate of string str
*@str:string to be duplicated
*Return: a pointer to a new string which is a duplicate of str upon sucess
**/
char *_strdup(char *str)
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
		if ( i == 0)
		{
			string[0] = str[0];
			return (string);
		}
		else
		{
			string = malloc(sizeof(char) * i + 1);
			for (j = 0; j < i; j++)
			{
				string[j] = str[j];
			}
			return (string);
		}
	}
}
