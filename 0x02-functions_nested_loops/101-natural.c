#include<stdio.h>
#include<string.h>
/**
 * main - print sum of natural numbers
 *Return: 0 sucess
**/
int main(void)
{
	int i;
	int k;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			k = k + i;
		}
	}
	printf("%d", k);
	printf("\n");
	return (0);
}
