#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Short description, single line
 *@s:input nuber
 *Return: Always 0.
 **/
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char *k;
	k=[]

	len = strlen(s);
	for (i = len - 1, j = 0 ; i >= 0 && j < len; j++, --i)
	{
		k[j] = s[i];
	}
	s = k;
}
