#include<stdio.h>
#include<stdlib.h>
/**
 *main- function to sum all given arguments 
 *@argc:number of arguments
 *@argv:arguments
 *Return: 0 in sucess 1 upon encoutering error
 **/
int main(int argc, char(*argv[]))
{
	int i,k = 0;
	
	if ( argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc + 1; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				k = k + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", k);
	return (0);
}
		
