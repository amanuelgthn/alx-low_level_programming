#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function_pointers.h"
/**
*int_index-function to array
*@array:array to be printed
*@size:size of the array
*@cmp:pointer to function
*Return: -1 if no match and the index of matching element if match
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	j = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]) > 0)
				{
					j = i;
					break;
				}
				if (cmp(array[i]) <= 0 && i == size - 1)
				{
					return (j);
				}
			}
		}
	}
	return (j);
}
