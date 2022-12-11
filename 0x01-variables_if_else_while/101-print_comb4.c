#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description - if statements
 *Return: Always 0 (Success)
 */
int main(void)
{
       	int i;
	int j;
	int k;
	
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (j > i && k > j)
				{
					putchar((i) + '0');
				}
				{
					putchar((j) + '0');
				}
				{
					putchar((k) + '0');

					if (j == 8 && i == 7 && k == 9)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
