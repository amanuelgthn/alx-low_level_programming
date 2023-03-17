#include"lists.h"
/**
*get_dnodeint-function that returns the nth node of a distint_t linked list
*@head:a doubly linked list
*@index:index of the node starting from 0
*Return:the node of the linked list at the given index
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int n = 0;
	dlistint_t *new;
	
	while (n < index)
	{
		head = head->next;
		n = n + 1;
	}
	new->n = head->n;
	return (n);
}
