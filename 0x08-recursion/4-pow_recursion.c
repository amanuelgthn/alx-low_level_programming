
#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*_pow_recursion- return the factorial of a number
*@x: number
*@y: power
*Return: return the x to the power of y
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return(x);
	}
	else
	{
		return (x * _pow_recursion(int x,int y - 1));
	}
}
