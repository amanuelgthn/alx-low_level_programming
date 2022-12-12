#include <stdio.h>
/**
 *main - Entry point
 *Description - Write file
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int count;

	for (count = 0; count < 58; count++)
	{
		if (c[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(c[count]);
	}
	putchar('\n');
	return (1);
}
