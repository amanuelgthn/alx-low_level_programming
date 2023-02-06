#include"main.h"
/**
*get_bit-function to get the bit of a binary at a given index
*@n:integer
*@index:index of the binary to be returned
*Return:the bit of a binary at a given index or -1 if out of index
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int k, j;

	k = n >> index;
	if (index > 63)
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
