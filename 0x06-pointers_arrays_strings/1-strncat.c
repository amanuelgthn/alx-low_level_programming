#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 **_strncat-unction that concatenates two strings
 *@dest:string where src string is going to be appeneded
 *@src:string to be copied
 *@n:length
 *Return: Always 0.
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	k = strlen(dest);
	for (i = k; i < n + k && src[i - k] != '\0'; i++)
	{
		dest[i] = src[i - k];
	}
	return (dest);
}
