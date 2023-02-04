#include"main.h"
unsigned long int pow(unsigned long int x,unsigned long int y)
{
	if (y == 0)
	{
		return (1);
	}
	else  if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * pow(x, y - 1));
	}
}
unsigned long int findpower(unsigned long int n, unsigned long int k)
{
	unsigned long int i = 0;
	
	if (n < (pow(2, i)))
	{
		return (findpower(n, i + 1));
	}
	else
	{
		return (i - 1);
	}
}	
/*
*print_binary-covert integer to binary and print result
*@n:integer
**/
void print_binary(unsigned long int n)
{
	unsigned long int i, j;
	
	if (n == 0)
	{
		printf("0\n");
	}
	else if (n == 1)
	{
		printf("1\n");
	}
	else
	{
		j = findpower(n);
		for(i=j; i > 0; i--)
		{
			if(n >= pow(2,i))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
}