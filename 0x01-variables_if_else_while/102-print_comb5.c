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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if ((i * 10) + j < (k * 10) + l)
					{
						putchar((i) + '0');
						putchar((j) + '0');
						putchar(' ');
					}
					else
					{
						continue;
					}
					{
						putchar((k) + '0');
						putchar((l) + '0');
					}
					{
						if ((i * 10) + j == 98 && (k * 10) + l == 99)
						{
							break;
						}
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
