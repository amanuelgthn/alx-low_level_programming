#include<stdio.h>
#include<stdlib.h>
/**
*_coin - return the number of coins for change
*return: number of coins for change 
/**
 * main- print the minimum number of coins to make change for an amount of money
 * @argc:number of arguments
 * @argv:arguments
 * Return: 1 if no arguments passed, 0 if argument passed is a negative number
 **/
int main(int argc, char *argv[])
{
	int i,number,j,k;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number= atoi(argv[1]);
		_coin(number);
	}
	return (0);
}
