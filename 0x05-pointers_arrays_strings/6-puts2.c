#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2- Short description, single line
 *@str:input nuber
 *Return: Always 0.
 **/
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
