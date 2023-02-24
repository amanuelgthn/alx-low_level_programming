#include"main.h"
/**
*main- function to print fizz buzz
*return 0 on success 
**/
int main()
{
	int i = 0;

	for (; i < 100; i++)
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
return (0);
}
