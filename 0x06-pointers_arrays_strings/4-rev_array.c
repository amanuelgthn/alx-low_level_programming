#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *reverse_array - reversing array
 *@a:arraay
 *@n:size of array
 *Return - o
 **/
void reverse_array(int *a, int n)
{
	int i,temp;

	i = 0;
	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1]; 
		a[n - i - 1])= temp;
	}
}
