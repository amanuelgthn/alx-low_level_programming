#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_sqrt_recursion- return square root using recursion
*@n:number
*Return- square root of the number n
**/
int _sqrt_finder(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		_sqrt_finder(n,i + 1);
	}
	else if (i * i == n)
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
