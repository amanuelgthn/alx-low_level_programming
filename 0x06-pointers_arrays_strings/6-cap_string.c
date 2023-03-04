#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *s)
{
	int i = 1, j, k = 12, m;
	int separator[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	
	j = strlen(s);
	for (; i < j; i++)
	{ 
		for (m = 0; m < k; k++)
		{
			if (s[i - 1] == separator[m])
			{
				if ( s[i] >= 97 && s[i] <= 122)
				{
					s[i] = s[i] - 32;
					break;
				}
			}
			else
			{
				continue;
			}
		}
	}
	return (s);
}		
