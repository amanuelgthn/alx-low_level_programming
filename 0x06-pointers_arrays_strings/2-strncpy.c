#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 **_strncpy- Short description, single line
 *@dest:input nuber
 *@src:string to be copied
 *@n:length
 *Return: Always 0.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
