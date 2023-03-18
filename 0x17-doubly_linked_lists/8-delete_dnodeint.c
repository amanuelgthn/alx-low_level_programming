#include"lists.h"
/**
*dlistint_len-return the number of elemensts in a doubly linked list
*@h:a doubly linked list to be printed
*Return: the number of nodes or elements in the doubly linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n = n + 1;
	}
	return (n);
}
/**
*delete_dnodeint_at_index-function that delets the node at index of a link
*@head:a doubly linked list
*@index:index of the node that be deleted starting from 0
*Return:1 if it succeeded or -1 if it failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, count;

	count = dlistint_len(*head);
	if (index == 0)
	{
		if (*head)
		{
			(*head)->next->prev = NULL;
		}
		return (1);
	}
	else if (index < count)
	{
		while (i < idx - 1 && (*head)->next != NULL)
		{
			(*head) = (*head)->next;
			i = i + 1;
		}
		if (*head)
		{
			(*head)->next->prev = (*head)->prev;
			(*head)->prev->next = (*head)->next;
			return (1);
		}
	}
	return (-1);
}
	
