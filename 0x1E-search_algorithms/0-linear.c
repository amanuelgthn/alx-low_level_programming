#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of intergers
 * using Linear search algorithms
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in the array
 * @value: value to be searched
 * Return: first index where value is located or -1 if value not present
 * or array NULL
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
