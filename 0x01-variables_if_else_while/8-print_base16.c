#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description - if statements
 *Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
		putchar((i) + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}
