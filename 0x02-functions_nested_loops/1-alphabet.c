#include <stdio.h>
/**
 *main - Entry point
 *Description: "function to print alphabet"
 *Return: Always 0 (Success)
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
