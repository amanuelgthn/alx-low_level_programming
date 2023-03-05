#include"main.h"
/**
*rot13-function that encodes a string using the rot13
*@s:string to be encoded
*Return:the pointer to the encoded string
**/
char *rot13(char *s)
{
	int i = 0, j, m, k;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	k = sizeof(a) / sizeof(char);
	j = strlen(s);
	for (; i < j; i++)
	{
		for (m = 0; m < k; m++)
		{
			if (s[i] == a[m])
			{
				s[i] = rot[m];
				break;
			}
		}
	}
	return (s);
}
