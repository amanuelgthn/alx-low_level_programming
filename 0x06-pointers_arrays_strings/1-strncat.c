#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 **_strncat- Short description, single line
 *@dest:input nuber
 *@src:string to be copied
 *@n:length
 *Return: Always 0.
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	n = strlen(src);
	k = strlen(dest);
	for (i = k; i < n + k; i++)
	{
		dest[i] = src[i - k];
	}
	return (dest);
}
