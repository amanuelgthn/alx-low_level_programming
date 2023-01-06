#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*__prime_finder- find if given number is prime or not
*@k:number
*@i:iterating number
*Return: 1 if number is prime numberand 0 if not
**/
int _prime_finder(int k, int i)
{

	if (k % i == 0 || k =)
	{
		return (k);
	}
	else if (i * i < k)
	{
		return (_sqrt_finder(k, i + 1));
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
/**
*_sqrt_recursion- find if given number is prime or not
*@n:number
*Return: 1 if number is prime number and 0 if not
**/
int is_prime_number(int n)
{
	int j;

	j = _prime_finder(n, 2);
	return (j);
}
