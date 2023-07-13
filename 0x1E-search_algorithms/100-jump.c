#include"search_algos.h"
/**
* jump_search -function that searches for a value in a sorted array of integers
* using the jump search algorithm
* @array: pointer to the first element of the array to be searched
* @size: number of elements in the array
* @value: value to be searched in the given array
* Return: first index where the value is located or -1 if not present or
* the array is NULL
**/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, root, high = size, found = 0;

	if (array == NULL || size == 0)
		return (-1);
	root = sqrt(high);
	/**printf("size = [%lu], root = [%lu]\n", size, root);**/
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i + root] >= value || i == size - 1)
		{
			if (found == 0)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, i + root);
				found = 1;
				i -= root;
			}
		}
		if (array[i] == value)
			return (i);
		if (array[i + root] < value)
		{
			printf("%lu\n", i);**/
			i += root - 1;
		}
	}
	return (-1);
}
