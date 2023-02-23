#include"main.h"
/**
*_isupper- function to check if a character is uppercase
*@c: character to be checked
*Return: 1 if the character is uppercase and 0 if not
**/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
