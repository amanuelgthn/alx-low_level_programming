#include<stdio.h>
#include<string.h>
/**
 *main - print first 50 fibonacci numbers
 *Return: 0 success
 **/
int main(void)
{
	long int  a, i, j, k;

	j = 1;
	k = 2;
	printf("%ld", j);
	printf(", ");
	printf("%ld", k);
	printf(", ");

	for (i = 2 ; i <= 98 ; i++)
	{
		a = k + j;
		printf("%ld", a);
		j = k;
		k = a;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
