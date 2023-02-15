#include<stdio.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
int main(int argc__attribute__((unused)), char *argv[])
{
	int i = 0,
	while(argv[i]!='\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
