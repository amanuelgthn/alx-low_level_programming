#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * malloc_checked- function that allocates memory using malloc
 * @b: memory size
 * Return: a pointer to the allocated memory 
 **/
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

	
