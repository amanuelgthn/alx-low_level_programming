#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;
	buffer =(char*)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		exit(1);
	}
	printf("$ \n");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%lu", characters);
	printf("%s", buffer);
	return(0);
}
