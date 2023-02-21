#include"main.h"
int main ()
{
	int nwords = 0;
	int i = 0;
	char str[] = "This is www tutorialspoint com website";
	char **arr = split_str(str, &nwords);
	for (int i = 0; i < nwords; i++)
	{
		printf ("word %d: %s\n", i, arr[i]);
	}
}
