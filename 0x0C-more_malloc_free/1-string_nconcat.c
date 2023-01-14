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

	// Declare a new Strings
	// to store the concatenated String
	char str3[100];

	unsigned int i = 0, j = 0;

	// Insert the first string
	// in the new string
	while (s1[i] != '\0' && i < n) {
		str3[j] = s1[i];
		i++;
		j++;
	}

	// Insert the second string
	// in the new string
	i = 0;
	while (s2[i] != '\0' && i < n) {
		str3[j] = s2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	return (str3);
}
