#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*_strdup- function returns a pointer to a new string which is a duplicate of the string str
*@str:string to be duplicated
*Return: a pointer to a new string which is a duplicate of str upon sucess
**/
char *_strdup(char *str)
{
	char *string;
	int i = strlen(str), j = 0;
	
	string = malloc(sizeof(char) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			string[j] = str[j];
		}
		free (string);
		return (*string);
	}
}
