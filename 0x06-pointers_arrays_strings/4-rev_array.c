#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reversing array
 * @a:arraay
 * @n:size of array
 * Return - o
 * **/
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");


