#include"main.h"
/**
*rot13-function that encodes a string using the rot13
*@s-string to be encoded
*Return:the pointer to the encoded string
**/
char *rot13(char *s)
{
	int i = 0, j, m;
	char a[] = {'a', 'e', 'o', 't', 'l' };
	int n[] = {52, 51, 48, 55, 49};

	j = strlen(s);
	for (; i < j; i++)
	{
		for (m = 0; m < 5; m++)
		{
			if (s[i] == a[m] || s[i] == a[m] - 32)
			{
				s[i] = n[m];
				break;
			}
		}
	}
	return (s);
}
  
