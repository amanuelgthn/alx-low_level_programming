#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half- Short description, single line
 *@str:input nuber
 *Return: Always 0.
 **/
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str) - 1;
	for (i = len / 2 - 1; i <= len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
