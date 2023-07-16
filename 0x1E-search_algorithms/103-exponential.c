#include"search_algos.h"
/**
 * exponential_search - function that searches a value in a sorted array of integers
 *  using exponential search algorithm
 *  @array: a pointer to the first element of the array to be searched in
 *  @size: number of elements in an array
 *  @vualue: value to be searched
 *  Return: first index where value is located or -1 if array is NULL
 *  or if value is not present
 **/
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

