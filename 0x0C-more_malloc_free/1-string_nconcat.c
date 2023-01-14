#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 * string_nconcat- function that  concatenates two strings
 * @s1:string 1 
 * @s2:string 2
 * @n: length of string s2 to be concatenated to s1
 * Return: pointer pointing to the concatenated strings
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	void *str3;
	unsigned int i = 0, j = 0;
	
	str3 = malloc[1024];
	while (s1[i] != '\0' && i < n) {
		str3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n) {
		str3[j] = s2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	return (str3);
}
