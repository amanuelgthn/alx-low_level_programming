#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *split_str- splits the string and return the array of each word separated
 *@str:string to be separated
 *Return:return the array of each word separted
 **/
char **split_str(char *str)
{
	int i = 0;
	int *words = 0;
	char *piece, **str_arr, *str_cpy = NULL;
	
	if (str == NULL)
	{
		return (NULL);
	}
	str_cpy = strdup(str);
	piece = strtok(str_cpy, " ");
	{
		while(piece!=NULL)
		{
			if((*piece) == '\n')
			{
				piece = strtok(NULL, " ");
				continue;
			}
			(*words)++;
			piece = strtok(NULL, " ");
		}
	}
	str_arr= (char**)malloc(sizeof(char*)*(*words));
	piece =strtok(str, " ");
	for (i = 0; piece!=NULL; i++)
	{
		if (*piece) == '\n')
		{
			piece = strtok(NULL, " ");
			continue;
		}
		str_arr[i]=(char*)malloc(sizeof(char)*(strlen(piece)+1));
		strcpy(str_arr[i],piece);
		piece = strtok(NULL, " ");
	}
	if(str_cpy)
	{
		free(str_cpy);
	}
	return(str_arr);
}
