int set_bit(unsigned long int *n, unsigned int index)
{
	{
	int k,;

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
		k  0;
	}
	return (1);
}
