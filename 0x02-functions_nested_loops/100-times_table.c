#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_times_table - Times table
 *@n: number of times tables
 *return - 0 sucess
 **/
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 100 && j > 0)
			{
				printf(" ");
			}
			if (k < 10 && j > 0)
			{
				printf(" ");
			}
			printf("%d", k);
			if (j == n)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
