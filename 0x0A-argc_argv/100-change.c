#include<stdio.h>
#include<stdlib.h>
/**
*_coin - return the number of coins for change
*return: number of coins for change 
**/
int _coin(int money, int coins)
{
	int itr = 0;
	int a[5] = {25, 10, 5, 2, 1}
	if(money > a[i])
	{
		if(money % a[i] == 0)
		{
			return (money / a[i]);
		}
		else
		{
			return (money / a[i] + _coin(money % a[i],coins+1));
		}
	}
			
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
		_coin(number,0);
	}
	return (0);
}
