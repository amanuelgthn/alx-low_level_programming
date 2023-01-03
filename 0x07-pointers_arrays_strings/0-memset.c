#include<stdio.h>
#include<string.h>
/**
 *_memset - function that fills memory with a constant byte
 *@s:addres of memory to print
 *@b: constant byte to be filled to the memory area pointed to by s
 *@n: number of bytes of the memory area pointed
 *Return: Retrun a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = 'b';
	}
}
