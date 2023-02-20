#include"main.h"
int main ()
{
	int nwords = 0;
	char str[] = "This is www tutorialspoint com website";
	char *arr = split_str(str);
	
	nwords=sizeof(*arr)/sizeof(arr[0]);
	for (int i = 0; i < nwords; i++)
	{
		printf ("word %d: %d\n", i, arr[i]);
	}
}
