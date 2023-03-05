#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *n)
{
	int i, x,j;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	
	j= strlen(n);
	for (i = 0; i <j; i++)
	{
		if (n[i] >=97 && n[i] <=122)
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
