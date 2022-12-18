#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 *_abs- a function that checks for lowercase character.
 *@n: number
 *Return: Description of the returned value
**/
int _abs(int n)
{
	if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar(0 + '0');
                return (0);
        }
        else
        {
                _putchar('-');
                return (-1);
        }
}

