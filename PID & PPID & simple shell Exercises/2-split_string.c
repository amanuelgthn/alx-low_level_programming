#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
char **split_str(char *str)
{
   int i = 0;
   const char s[2] = "-";
   char *token;
   char *str_token[5];
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL )
   {
      str_token[i]=token;
      token = strtok(NULL, s);
      i++;
   }
   return(str_token);
}
