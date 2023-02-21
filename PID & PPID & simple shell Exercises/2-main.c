#include"main.h"
int main ()
{
	int nwords = 0;
	int i = 0;
	char str[] = "This is www tutorialspoint com website";
	char *arr = split_str(str);
	
	while(arr[i]!='\0')
	{
		printf ("word %d: %d\n", i, arr[i]);
	}
}
