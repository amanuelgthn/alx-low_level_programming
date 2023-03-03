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
	int i = 0;
	int num = 0;
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			return (0);
			num = num * 10 + s[i] + '0';
		}
	}
	return (num);
}
