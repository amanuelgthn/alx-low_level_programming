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

	for (i = 0 ; i < 51 ; i++)
	{
		a = k;
		k = k + j;
		j = a;
		printf("%d", k);
		printf(", ");
		if ( i == 50)
		{
			break;
		}
	}
	return (0);
}


