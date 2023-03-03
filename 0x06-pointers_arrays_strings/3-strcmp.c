#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncpy- function that compares two strings.
 *@s1:string 1
 *@s2:string 2
 *Return: positive number if the first non-matching character is greater than s2
 **/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j,k,res;
	
	j = strlen(s1);
	k = strlen(s2);
	
	for (;i < j || i < k; i++)
	{
		if (s1[i] == s2[i])
		{
			res = 0;
			continue;
		}
		else if (s1[i] > s2[i])
		{
			res = 13;
			break;
		}
		else if (s1[i] < s2[i])
		{
			res = -13;
		}
	}
	return (res);
}		
