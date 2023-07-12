#include"search_algos.h"
/**
* jump_search - function that searches for a value in a sorted array of integers
* using the jump search algorithm
* @array: pointer to the first element of the array to be searched
* @size: number of elements in the array
* Return: first index where the value is located or -1 if not present or the array is NULL
**/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, root, high = size - 1;

	root = sqrt(high);
	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d}\n", i, i);
		if (array[i] == value)
			return (i);
		else if (array[root] == value)
			return (root);
		else if (array[root] < value)
		{
			i = root

