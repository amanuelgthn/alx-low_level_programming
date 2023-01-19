#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*f-function to print name
*@d:name to be printed
**/
void f(char *d)
{
	int i;

	for (i = 0; d[i] != '\0'; i++)
	{
		putchar(d[i]);
	}
	putchar('\n');
}
/**
*print_name-function to print name
*@name:name to be printed
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
	
