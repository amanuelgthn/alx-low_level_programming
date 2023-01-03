#include<stdio.h>
#include<string.h>
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: memory area to be filled
 *@src: memory area to be copied
 *@n: number of memory area to be copied
 *Return: a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
