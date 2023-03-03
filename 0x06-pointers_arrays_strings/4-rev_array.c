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
	while (a[i] != '\0')
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[n - i - 1]);
		i++;
	}
	printf("\n");
}
