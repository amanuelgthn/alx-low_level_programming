#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[35] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9,
		10, 11, 12, 12, 12, 19, 19, 19, 71, 71, 71, 81, 82, 83, 84
	};
	printf("Found at index: %d\n", interpolation_search(array, 35, 123456789));
	return (0);
}