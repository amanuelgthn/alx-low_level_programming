#include<stdio.h>
#include<string.h>
/**
 *main - print first 50 fibonacci numbers
 *Return: 0 success
 **/
int main(void)
{
	int a, i, j, k;

	j = 1;
	k = 2;
	printf("%d", j);
	printf(", ");
	printf("%d", k);
	printf(", ");

	for (i = 2 ; i <= 45 ; i++)
	{
		a = k + j;
		printf("%d", a);
		j = k;
		k = a;
		if (i !=45)
		{
			printf(", ");
		}
	}
	return (0);
}
