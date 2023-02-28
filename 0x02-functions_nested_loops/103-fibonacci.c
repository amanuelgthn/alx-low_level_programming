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
	printf("%ld", k);
	printf(", ");

	for (i = 2 ; i < 4000000 ; i++)
	{
		a = k + j;
		if ( a % 2 == 0)
		{
			printf("%ld", a);
		}
		j = k;
		k = a;
		printf(", ");
	}
	printf("\n");
	return (0);
}
