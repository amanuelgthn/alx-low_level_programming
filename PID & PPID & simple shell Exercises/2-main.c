#include"main.h"
int main()
{
	char *str_token;
	char str[80] = "This is www tutorialspoint com website";
	str_token = split_str(str);
	while(str_token!=NULL)
	{
	    printf( " %s\n", str_token);
	 }
	return(0);
}
int main ()
{
	int nwords = 0;
	char str[] = "This is www tutorialspoint com website";
	char **arr = split_str(str);
	
	nwords=sizeof(**arr)/sizeof(arr[0]);
	for (int i = 0; i < nwords; i++)
	{
		printf ("word %d: %s\n", i, arr[i]);
	}
}
