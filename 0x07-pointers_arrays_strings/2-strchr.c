#include"main.h"
/**
*_strchr-function that locates a character in a string
*@s:string to be checked
*@c:character to be located in a string
*Return:pointer to the first occurence of the character c in s
**/
char *_strchr(char *s, char c)
{
	int i = 0,str_len;
	char res[1];
	
	str_len = strlen(s);
	for (; i < str_len; i++)
	{
		if (s[i] == c)
		{
			res[0] = c;
			return (res);
			break;
		}
		else
		{
			return (NULL);
		}
	}
}
