#include <stdio.h>
/**
 *_islower- a function that checks for lowercase character.
 *@c: alphabet
 *Return: Description of the returned value
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
