#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *jack_bauer - print time
 *Return - 0 sucess
 **/
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
