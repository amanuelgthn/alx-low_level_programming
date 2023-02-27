#include"main.h"
#include <math.h>
/**
*maxPrime-finds and prints the largest prime factor of the number 612852475143
*@n:number
*Return: the largest prime factor of the number
**/
long int maxPrimeFactors(long int n)
{
	long int  maxPrime = -1, i = 0;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
	{
		maxPrime = n;
	}
	return (maxPrime);
}
/**
*main-finds and prints the largest prime factor of the number 612852475143
*Return: 0 in sucess
**/
int main(void)
{
	long int n = 612852475143;
	
	printf("%ld\n", maxPrimeFactors(n));
	return (0);
}
