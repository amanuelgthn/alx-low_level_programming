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
	while((s[i]>=65 && s[i]<= 90) || s[i]>=97 && s[i] <= 122) && s[i]!='\0')
	{
		if ((s[i]>=65 && s[i]<=77) || (s[i]>=97 && s[i] <= 109))
		{
			sign = 13;
		}
		s[i] = s[i] + sign;
		sign = -13;
		i = i + 1;
	}
	return (s);
}
