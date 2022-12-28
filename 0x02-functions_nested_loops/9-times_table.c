#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *times_table - Times table
 *return - 0 sucess
 **/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				printf(" ");
			}
			printf("%d", k);
			if (j == 9)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
