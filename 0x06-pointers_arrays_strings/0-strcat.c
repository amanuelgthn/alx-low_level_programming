#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - Short description, single line
 *@dest:input nuber
 *@src:string to be copied
 *Return: Always 0.
 **/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	int k;

	n = strlen(src);
	k = strlen(dest);
	for (i = k; i < n + k; i++)
	{
		dest[i] = src[i - n];
	}
	return (dest);
}
