#include"search_algos.h"
/**
 * power - calculate the power of a number 
 * @base: base
 * @power: power
 * Return: the power of the number
 **/
double pow(double x, double y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (x == 1)
		return (x);
	return x * pow(x, y - 1);
}
int main()
{
    double x = pow(2,4);
    printf("x = %f\n",x);
    return (0);
}