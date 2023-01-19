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
	long unsigned int i;
	
	if (size == 0)
	{
		return;
	}
	for(i = 0; i<size; i++)
	{
		action(array[i]);
	}
}
