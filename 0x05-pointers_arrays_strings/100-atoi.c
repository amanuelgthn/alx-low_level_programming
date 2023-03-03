#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
*_atoi- function to convert a string into an integer
*@s:string to be converted into an integer
*Return:the converted integer
**/
int _atoi(char *s)
{
	unsigned int i = 0;
	unsigned int num = 0;
	unsigned int sign = 1;

	for (; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
			continue;
		}
		if (s[i] == '+' || s[i] == ' ')
		{
			sign = sign * 1;
			continue;
		}	
		if (s[i] < 48 || s[i] > 57)
		{
			return (0);
		}
		else
		{
			num = num * 10 + s[i] - 48;
		}
	}
	num = sign * num;
	return (num);
}
