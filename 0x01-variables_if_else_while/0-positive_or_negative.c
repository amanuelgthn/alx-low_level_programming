#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *Description - if statements
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0 )
	{
		printf( n," is zero%d.\n");
	}
	else if (n >0)
	{
		printf(n," is positive%d.\n");
	}
	else
	{
		printf(n," is negative%d.\n");
	}
	return (0);
}

