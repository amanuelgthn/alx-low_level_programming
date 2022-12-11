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

        for (i = 0; i < 9; i++)
        {
		for (j = i + 1; j < 10; j++)
		{
			if (j > i)
			{
				putchar((i) + '0');
			}
			{
				putchar((j) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
        putchar('\n');
        return (0);
}
