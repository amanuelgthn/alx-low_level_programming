#include <stdio.h>
/**
 *print_alphabet - prints alphabet
**/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
}
/**
 *print_alphabet_x10 - prints alphabet
**/

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
}
