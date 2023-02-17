#include<stdio.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
int main(__attribute__((unused)) int ac, char *argv[])
{
	int i = 0;
	
	while(argv[i]!=NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
