#include"main.h"
/**
*cap_string-a function that encodes a string to 1337
*@s:string to be encoded
*Return:pointer to the encoded string
**/
char *leet(char *s)
{
	int i = 0,j;
	
	j = strlen(s);
	for (; i < j; i++)
	{ 
		if (s[i] >= 'a' || s[i] <= 'A')
		{
			s[i] = 52;
		}
	}
	return (s);
}
