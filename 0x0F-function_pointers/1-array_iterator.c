#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*f-function to print name
*@d:name to be printed
*print_name-function to print name
*@name:name to be printed
*@f:pointer to function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0)
	{
		return;
	}
	for(i=0,i<size;i++)
	{
		action(array[i]);
	}
}
