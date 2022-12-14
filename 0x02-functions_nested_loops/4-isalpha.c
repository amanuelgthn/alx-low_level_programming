#include <stdio.h>
/**
 *_isalpha- a function that checks for lowercase character.
 *@c: alphabet
 *Return: Description of the returned value
**/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' ||c >= 'a' && c <= 'z' )
	{
		return (1);
	}
	else if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
