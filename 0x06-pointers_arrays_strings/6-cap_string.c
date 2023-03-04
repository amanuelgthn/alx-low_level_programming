#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *s)
{
	int i = 1, j, k = 12, m , capitalize = 32;
	int separator[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	
	j = strlen(s);
	for (; i < j; i++)
	{ 
		if ( s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - capitalize;
		}
		capitalize = 0;
		for (m = 0; m < k; k++)
		{
			if (s[i] == separator[m])
			{
				capitalize = 32;
			}
		}
	}
	return (s);
}
