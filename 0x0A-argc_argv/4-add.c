#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
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
		for (i = 1; i < argc; i++)
		{
			if(atoi(argv[i])>=0 || atoi(argv[i])<0)
			{
				k = k + atoi(argv[i]);
			}
			else
			{
				k = -1;
				return (1);
				break;
			}
		}
		if (k == -1)
		{
			printf("Error\n");
		}
		else
		{
			printf("%d\n", k);
		}
	}
	return (0);
}		
