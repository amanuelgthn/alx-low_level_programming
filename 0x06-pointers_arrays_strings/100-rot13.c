#include"main.h"
/**
*rot13-function that encodes a string using the rot13
*@s-string to be encoded
*Return:the pointer to the encoded string
**/
char *rot13(char *s)
{
	int i = 0, j, sign;

	j = strlen(s);
	for (; i < j; i++)
	{
		if ((s[i]>=65 && s[i]<=77) || (s[i]>=97 && s[i] <= 109))
		{
			sign = 13;
		}
		s[i] = s[i] + sign;
		sign = -13;
	}
	return (s);
}
