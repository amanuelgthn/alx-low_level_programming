#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen- Short description, single line
 *@s:input nuber
 *Return: Always 0.
 **/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}
