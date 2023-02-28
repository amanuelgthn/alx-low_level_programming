#include<stdio.h>
#include<string.h>
/**
 *main - print first 50 fibonacci numbers
 *Return: 0 success
 **/
int main(void)
{
	long int  a, i, k, sum;

	k = 2;
	sum = k;
	for (i = 2 ; i < 4000000 ; i++)
	{
		a = k + j;
		if ( a % 2 == 0 && sum < 4000000)
		{
			sum = sum + a;
		}
		j = k;
		k = a;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
