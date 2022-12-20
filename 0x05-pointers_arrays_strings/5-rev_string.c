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
	char k;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		k = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = k;
	}
}
