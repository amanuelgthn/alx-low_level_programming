#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *main- prints all arguments it recieves without using ac
 *@ac:number of arguments
 *@argv:arguments
 *Return: 0 success
 **/
int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
   }
