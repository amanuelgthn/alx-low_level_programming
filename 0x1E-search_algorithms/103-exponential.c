#include"search_algos.h"
/**
 * pow - calculate the power of a number
 * @x: base
 * @y: power
 * Return: the power of the number
 **/
double pow(double x, double y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (x == 1)
		return (x);
	return (x * pow(x, y - 1));
}
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
 * search_binary - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to be searched
 * @low: first index of the array to be searched
 * @high: last index of the array to be searched
 * @value: the value to be searched
 * Return: the index where the value is located in the array
 * or -1 if the array is NULL or value is not present
 **/
int search_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = 0;

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
/**
 * exponential_search - function that searches a value in
 * a sorted array of integers
 *  using exponential search algorithm
 *  @array: a pointer to the first element of the array to be searched in
 *  @size: number of elements in an array
 *  @value: value to be searched
 *  Return: first index where value is located or -1 if array is NULL
 *  or if value is not present
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);
	if (size == 1 && value != array[0])
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value check array[%lu] = [%d]\n", bound, array[bound]);
		if (bound == 1)
			bound += 1;
		else
			bound = pow(bound, 2);
	}
	printf("Value check array[%lu] = [%d]\n", bound / 2, array[bound / 2]);
	printf("Value found between [%lu] and [%lu]\n", bound / 2,
	MIN(bound, size - 1));
	return (search_binary(array, bound / 2, MIN(bound + 1, size - 1), value));
}
