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
	
/*
*print_binary-covert integer to binary and print result
*@n:integer
**/
void print_binary(unsigned long int n)
