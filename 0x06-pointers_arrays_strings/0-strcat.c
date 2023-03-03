#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - function appends the src string to the dest string
 *@dest:string where src will be appended
 *@src:string to be appended to dest
 *Return: a pointer to the resulting string dest
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
		dest[i] = src[i - k];
	}
	return (dest);
}
