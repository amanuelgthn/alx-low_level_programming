#include"main.h"	
/**
*get_bit-function to get the bit of a binary at a given index
*@n:integer
*@index:index of the binary to be returned
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int k, j;
	
	k = n >> index;
	if (k == '\0')
	{
		j = -1;
	}
	else if (k & 1)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}
