#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		return (NULL);
		exit(98);
	}
	return (a);
}
/**pass_s2 - pass the  string s2 to pointer
*@str2: string to be passed
*@ln: n bytes of strings to be passed
*Return: pointer pointing to string s2
**/
char *pass_s2(char *str2, unsigned int ln)
{
	char *strptr;
	unsigned int l, m ;
	
	strptr = malloc_checked(sizeof(char) * (ln) + 1);
	m = strlen(str2);
	for (l = 0; l < m && l < ln; l++)
	{
		strptr[l] = str2[l];
	}
	free(strptr);
	return (strptr);
}
/**pass_s1 - pass the  string s2 to pointer
*@str1: string to be passed
*Return: pointer pointing to string s2
**/
char *pass_s1(char *str1)
{
	char *strptr1;
	unsigned int l1, m1 ;

  l1=strlen(str1);
	strptr1 = malloc_checked(sizeof(char) * (l1) + 1);
	for (m1 = 0; m1 < l1;m1++)
	{
		strptr1[m1] = str1[m1];
	}
	free(strptr1);
	return (strptr1);
}		
/**
 * string_nconcat- function that  concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n: length of string s2 to be concatenated to s1
 * Return: pointer pointing to the concatenated strings
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, j = 0;

	if (s1==NULL && s2==NULL)
  {
    str=malloc_checked(sizeof(char) * (n) + 1);
    str[0]='\0';
    return(str);
    }
  else if (s1 == NULL || s1[0]=='\0')
	{
		str = pass_s2(s2,n);
	}
	else if (s2 == NULL || s2[0]=='\0')
  {
    str = pass_s1(s1);
  }
  else
	{
		i = strlen(s1);
		str = malloc_checked(sizeof(char) * (i + n) + 1);
	k = strlen(s1);
	for (; j < i + n; j++)
	{
		if (j < i)
		{
			str[j] = s1[j];
		}
		else if (j <= k + i)
		{
			str[j] = s2[j - i];
		}
	}
    }
	return (str);
}
