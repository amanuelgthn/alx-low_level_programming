#include"main.h"
/**
*main-function to print fizz buzz
*Return: 0 on success 
**/
int main()
{
	int i = 1;

	for (; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d",i);
		}
		printf(" ");
	}
	printf("\n");
return (0);
}
