#include "main.h"
#include <stdio.h>
/**
 *swap_int - Short description, single line
 *@a:input nuber
 *@b:input number
 *Return: Always 0.
 */

void swap_int(int *a, int *b);

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
