#include <stdio.h>
#include "main.h"
#include <time.h>                                                                                

/**                                                                                              
 *main - Entry point                                                                             
 **Description - if statements                                                                    *Return: Always 0 (Success)                                                                     
 **/
int print_alphabet(char);
int main()
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
return (0);
}
