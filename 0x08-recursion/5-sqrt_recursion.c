#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_sqrt_recursion- return square root using recursion
*@n:number
*Return- square root of the number n
**/
int _sqrt_recursion(int n)
{
	int i = 1;
	
	if (n < 0)
	{
		reurn (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		i++;
		_sqrt_recursion(n);
	}
	else if (i * i = n)
	{
		return (i);
	}
	else 
	{
		return (i - 1);
	}
}
