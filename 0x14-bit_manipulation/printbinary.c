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
	int i = findpower(n,0),k;
	for (; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}		
