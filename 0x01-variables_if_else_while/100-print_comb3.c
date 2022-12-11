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
		for (j = 1; j < 10; J++)
		{
			putchar((i) + '0');
			if (i < 9)
			{
				putchar((i) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
        putchar('\n');
        return (0);
}

