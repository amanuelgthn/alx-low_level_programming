#include<stdio.h>
#include<string.h>
/**
*main - print own program name
*@argv: arguments
*@argc: number of arguments
*Return:0 success
**/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
