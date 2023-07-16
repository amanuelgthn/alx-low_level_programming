#include"search_algos.h"
/**
 * print_searching - function to print the array in which
 * search is being perfomed
 * @array: pointer to the first element of the array to be printed
 * @first: first index of the array to be printed
 * @last: last index of the array to be printed
 **/
void print_searching(int *array, size_t first, size_t last)
{
	size_t i = first;

	printf("Searching in array: ");
	for (; i <= last; i++)
	{
		printf("%d", array[i]);
		if (i < last)
			printf(", ");
	}
	printf("\n");
}
/**
 * advanced_binary - function that searches for a value in a sorted array of intergers
 * using advanced binary search
 * @array - pointer to the first element of the array to be searched in
 * @size - number of elements in array
 * @value - value to be searched
 * Return: index where value is located or -1 if array is NULL
 * or value is not present
 **/
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_searching(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
