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
   int i = 0;
   int j = strlen(str);
   char *str_token[j];
   
   /* get the first token */
  str_token[i] = strtok(str, " ");
   
   /* walk through other tokens */
   while( str_token !=NULL)
   {
      str_token[++i]=strtok(NULL, " ");
   }
   return(*str_token);
}
