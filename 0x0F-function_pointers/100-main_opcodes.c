#include<stdio.h>
#include<stdlib.h>
/**
*main- function to print the opcodes of a given machine)
*@argc: number of arguments passed
*@argv: arguments passed
*Return:0
**/
int main(int argc, char *argv[])
{
	int i = 0, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i < j; j++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < j - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
