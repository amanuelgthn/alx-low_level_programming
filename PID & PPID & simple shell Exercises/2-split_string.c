#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
char split_str(char str)
{
   const char s[2] = "-";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL )
   {
      printf( " %s\n", token );
      token = strtok(NULL, s);
   }
   return(token);
}
