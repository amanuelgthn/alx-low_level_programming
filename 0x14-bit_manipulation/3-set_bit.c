#include"main.h"
/**
*get_bit-function to get the bit of a binary at a given index
*@n:integer
*@index:index of the binary to be returned
*Return:the bit of a binary at a given index or -1 if out of index
**/
int set_bit(unsigned long int n, unsigned int index)
{
	{
	int k;

	k = n >> index;
	if (index > 63)
	{
		return(-1);
	}
	else if (k & 1)
	{
		k = 1;
	}
	else
	{
		k = 1;
	}
	return (1);
}
