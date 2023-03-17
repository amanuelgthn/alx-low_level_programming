#include"lists.h"
/**
*sum_dlistint_t-returns the sum of all data in the doubly linked list
*@head:doubly linked list
*Return:the sum of all the data in the list
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *check = head;

	while(check)
	{
		sum = sum + check->n;
		check = check->next;
	}
	return (sum);
}
