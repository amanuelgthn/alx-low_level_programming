#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*print_name-function to print name
*@name:name to be printed
*f-function pointer to print_name
**/
void f(char *d)
{
	int i;
	
	for (i = 0;d[i] != '\0';i++)
	{
		putchar(d[i]);
	}
	putchar('\n');
}
	
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
	
