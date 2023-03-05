#include"main.h"
/**
*leet-a function that encodes a string to 1337
*@s:string to be encoded
*Return:pointer to the encoded string
**/
char *leet(char *s)
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
