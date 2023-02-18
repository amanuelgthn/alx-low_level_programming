#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *split_str- splits the string and return the array of each word separated
 *@str:string to be separated
 *Return:return the array of each word separted
 **/
char *split_str(char *str)
{
   char *token;
   char *str_token[10];
   
   /* get the first token */
   token = strtok(str, " ");
   
   /* walk through other tokens */
   while( token != NULL )
   {
      str_token=token;
      token = strtok(NULL, " ");
   }
   return(*str_token);
}
