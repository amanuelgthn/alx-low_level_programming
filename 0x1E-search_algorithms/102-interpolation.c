#include"search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array of integers using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to be searched
 * Return: first index where value is located or -1 if the array is NULL or value is not  present
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos, high = size- 1;

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else if (value < array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return pos;
		}
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return low;
	}
	else
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
}
