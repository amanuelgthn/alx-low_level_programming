#include"main.h"
int main()
{
	char *str_token;
	char str[80] = "This is - www.tutorialspoint.com - website";
	str_token = split_str(str);
	if (str_token!=NULL)
	{
		printf( " %s\n", str_token );
	}
	return(0);
}
