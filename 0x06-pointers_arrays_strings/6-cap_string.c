#include"main.h"
/**
*cap_string-a function that capitalizes all words of a string.
*@s:string to be capitalized
*Return:pointer to the converted string
**/
char *cap_string(char *s)
{
	int i = 0, j, m,k = 12, capitalize = 32;
	int separator[] = {9, 10, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	j = strlen(s);
	for (; i < j; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - capitalize;
		}
		capitalize = 0;
		for (m = 0; m <= k; m++)
		{
			if (s[i] == separator[m])
			{
				capitalize = 32;
				break;
			}
		}
	}
	return (s);
}
