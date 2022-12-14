#include <stdio.h>
/**
 * function_name - Short description, single line
(*
 * Description: prints alphabet
(* section header: Section description)*
 * Return: Description of the returned value
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
}
