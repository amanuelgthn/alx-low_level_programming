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
	int l;

        for (i = 0; i < 10; i++)
        {
                for (j = i; j <8; j++)
                {
			for (k = j; k < 10; k++)
			{
				for (l = 0; l <10; l++)
				{
					if (l >= k && k >= j && j >= i)
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
						if (j == 9 && i == 7 && k == 9 && l == 9)
							break;
						else
						{
							putchar((k) + '0');
						}
						{
							putchar((l) + '0');
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