#include"main.h"
int pow_recur(int x,int y)
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
		return (x * pow_recur(x, y - 1));
	}
}
int findpower(int n, int k)
{
	if (n >= (pow_recur(2, k)))
	{
		return (findpower(n, k + 1));
	}
	else
	{
		return (k - 1);
	}
}	
/*
*print_binary-covert integer to binary and print result
*@n:integer
**/
void print_binary(unsigned long int n)
{
	unsigned long int i, j, k;
	
	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1)
	{
		printf("1");
	}
	else
	{
		j = findpower(n,0);
		for(i=j; i > 0; --i)
		{
			k=pow_recur(2,i);
			if(n > k)
			{
				printf("1");
				n = n - k;
			}
			else
			{
				printf("0");
			}
		}
	}
}
