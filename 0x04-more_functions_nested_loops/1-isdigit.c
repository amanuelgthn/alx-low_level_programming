#include"main.h"
/**
*_isdigit-function to check if a character is a digit or not
*@c:character to be checked if it is a digit or not
*Return:1 if the character is a digit or 0 if not
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
