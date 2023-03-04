#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *s)
{
	int i = 0, j, k = 12, m;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};
	
	j = strlen(s);
	for (; i < j; i++)
	{ 
		for (m = 0; m < k; k++)
		{
			if (s[i] == separator[m])
			{
				if ( s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
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
