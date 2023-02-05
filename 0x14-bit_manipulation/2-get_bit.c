#include"main.h"	
/**
*get_bit-covert integer to binary and print result
*@n:integer
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int k, j;
	
	k = n >> index;
	if (k == NULL)
	{
		j = -1;
	}
	esle if (k & 1)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}
