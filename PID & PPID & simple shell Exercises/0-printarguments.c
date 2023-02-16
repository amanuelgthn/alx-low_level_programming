#include<stdio.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
int main(int ac__attribute__((unused)), char *argv[])
{
	int i = 0;
	
	while(ac)
	{
		if(argv[i]==NULL)
		{
			break;
		}
		else
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
