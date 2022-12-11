#include <stdio.h>
/**
 *main - Entry point
 *Descriptioni - Using printf
 *Return: Always 0 (Success)
 **/
int main(void)
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d bytes\n", sizeof(a));
	printf("Size of an int: %d bytes\n", sizeof(b));
	printf("Size of a long int: %d bytes\n", sizeof(c));
	printf("Size of a long long int: %d bytes\n", sizeof(d));
	printf("Size of a float: %d bytes\n", sizeof(e));
