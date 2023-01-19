#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
int first_digit(int n)
{
	int first;
	
	first = n;
	while(first >= 10)
	{
		first = first / 10;
	}
	return (first);
}
/**
*array_iterator-function to array
*@array:array to be printed
*@size:size of the array
*@action:pointer to function
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if(size <= 0)
	{
		return (-1);
	}
	else
	{
		for (; i < size; i++)
		{
			if(cmp(array[i]) > 0)
			{
				return(i);
				break;
			}
			if (cmp(array[i]) <=0 && i=size-1)
			{
				return(-1);
			}
		}
		
	}
}
