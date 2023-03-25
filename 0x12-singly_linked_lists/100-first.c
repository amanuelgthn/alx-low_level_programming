#include<stdio.h>
void Startup(void) __attribute__((constructor));
/**
*Startup-function executed before main function
**/
void Startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
