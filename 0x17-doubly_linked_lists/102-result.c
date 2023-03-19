#include"lists.h"
/**
*isPalindrome-function to find if a number is palindrome or not
*@n-number
*Return:1 if the number is palindrome or -1 if not
**/
int isPalindrome(int n)
{
	int tmp = n, r = 0, sum = 0;
	
	while (n != 0)
	{
		r = n % 10;
		sum = (sum * 10) + r;
		n = n / 10;
	}
	if ( tmp == sum)
		return (1);
	return (-1);
}
int main()
{
	int largest = 0, num1 = 1, num2, num;
	
	for (;num1 < 1000; num1++)
	{
		for (num2 = 1;num2 < 1000; num2++)
		{
			num = num1 * num2;
			if (isPalindrome(num) == 1 && largest < num)
			{
				largest = num1 * num2;
			}
		}
	}
	printf("%d",largest);
	return (0);
}
	
