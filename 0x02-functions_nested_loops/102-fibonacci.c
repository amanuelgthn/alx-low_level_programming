#include<stdio.h>
#include<string.h>
/**
 *main - print first 50 fibonacci numbers
 *Return: 0 success
 **/
int main(void)
{
	int long long  a, i, j, k;

	j = 1;
	k = 2;
	printf("%lld", j);
	printf(", ");
	printf("%lld", k);
	printf(", ");

	for (i = 2 ; i <= 50 ; i++)
	{
		a = k + j;
		printf("%lld", a);
		j = k;
		k = a;
		if (i != 44)
		{
			printf(", ");
		}
	}
	return (0);
}
