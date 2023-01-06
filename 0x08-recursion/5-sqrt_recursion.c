#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_sqrt_recursion- return square root using recursion
*@n:number
*Return- square root of the number n
**/
int _sqrt_finder(int k, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (k == 0 || k == 1)
	{
		return (k);
	}
	else if (i * i < k)
	{
		_sqrt_finder(k,i + 1);
	}
	else if (i * i == k)
	{
		return (i);
	}
	else 
	{
		return (i - 1);
	}
}
int _sqrt_recursion(int n)
{
	int _sqrt_finder(n, 1);
}
