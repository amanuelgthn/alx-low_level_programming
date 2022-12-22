#include "main.h"
#include <stdio.h>
#include <string.h>
/**
**_strcpy - Short description, single line
*@dest:input nuber
*@src:string to be copied
*Return: Always 0.
**/
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		for ( ; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
