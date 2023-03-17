#include"lists.h"
/**
*sum_dlistint_t-returns the sum of all data in the doubly linked list
*@head:doubly linked list
*Return:the sum of all the data in the list
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	while(head->next != NULL && head =!NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
