#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_to_98 - Print to 98
*@n: number to start
*Return: 0 sucess
**/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n < 99; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
		}
	}
	else
	{
		for ( ; n > 97; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
		}
	}
	printf("\n");
}
