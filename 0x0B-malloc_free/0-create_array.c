#include<stdio.h>
#include<stdlib.h>
/**
 *create_array- creates an array of chars  and initializes it with a char 'c'
 *@size:size of the array
 *@c: specific char to be assigned
 *Return:a pointer to the array or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
