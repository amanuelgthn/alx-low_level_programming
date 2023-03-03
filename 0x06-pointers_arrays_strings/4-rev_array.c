#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *reverse_array - reversing array
 *@a:arraay
 *@n:size of array
 *Return - o
 **/
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[n - i - 1]);
		if (i != n)
		{
			printf(", ");
		}
		if (i == n)
		{
			break;
		}
	}
	printf("\n");
}
