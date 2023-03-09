Write a function that adds two numbers.

Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r)
Where n1 and n2 are the two numbers
r is the buffer that the function will use to store the result
size_r is the buffer size
The function returns a pointer to the result
You can assume that you will always get positive numbers, or 0
You can assume that there will be only digits in the strings n1 and n2
n1 and n2 will never be empty
If the result can not be stored in r the function must return 0
	 char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
#include"main.h"
/**
*infinite_add-function that adds two numbers
*@n1:first number to be added
*@n2:second number to be added
*@r:buffer that the function will use to store the result
*@size_r:buffer size
*Return: a pointer to the result
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	
	
