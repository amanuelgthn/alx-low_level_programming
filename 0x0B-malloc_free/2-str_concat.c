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
	int i, j = 0, k;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		if ( s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		i = strlen(s1);
		k = strlen(s2);
		string = malloc(sizeof(char) * i + k + 1);
		if (string == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i + k; j++)
		{
			if ( j < i)
			{
				string[j] = s1[j];
			}
			else
			{
				string[j] = s2[j - i];
			}
		}
		return (string);
	}
}
