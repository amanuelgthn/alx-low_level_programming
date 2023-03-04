#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *s)
{
	int i = 0, j;

	j = strlen(s);
	for (; i < j; i++)
	{
		if (s[i] < 97 || s[i] > 122)
		{
			continue;
		}
		else
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
