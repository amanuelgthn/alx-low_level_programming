#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*array_iterator-function to array
*@array:array to be printed
*@size:size of the array
*@action:pointer to function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long  i = 0;

	if (array && size > 0 && action)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
