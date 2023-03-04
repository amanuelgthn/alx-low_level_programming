#include"main.h"
/**
*string_toupper-function to convert a string to upper case
*@s:string to be converted to uppercase
*Return:pointer to the coverted string
**/
char *string_toupper(char *s)
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
