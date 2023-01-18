#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*print_name-function to print name
*@name:name to be printed
*f-function pointer to print_name
**/
void print_name(char *name, void (*f)(char *))
{
	int i = 0, j;
	
	j = strlen(name);
	for(;i < j; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
}
	
