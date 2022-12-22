#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array- Short description, single line
 *@a:input nuber
 *@n:input nuber
 *Return: Always 0.
 **/
void print_array(int *a, int n)
{
	int i;

	n = sizeof(*a);
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	printf("\n");
}
