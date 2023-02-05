#include"main.h"	
/**
*get_bit-covert integer to binary and print result
*@n:integer
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int k;
	
	k = n >> index;
	if (k & 1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
