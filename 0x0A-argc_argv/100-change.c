#include<stdio.h>
#include<stdlib.h>
/**
*_coin - return the number of coins for change
*return: number of coins for change 
**/
int _coin(int money, int coins)
{
	int a[5] = {25, 10, 5, 2, 1}
	if(money > a[coins]&& coins <= 5)
	{
		if(money % a[coins] == 0)
		{
			return (money / a[coins]);
		}
		else
		{
			return (money / a[coins] + _coin(money % a[coins],coins+1));
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
	int i,number;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number= atoi(argv[1]);
		if (number <= 0)
		{
			printf("0\n");
		}
		else
		{
			i=_coin(number,0);
			printf("%d",i);
		}
	}
	return (0);
}
