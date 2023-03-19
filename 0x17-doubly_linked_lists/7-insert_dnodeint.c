#include"lists.h"
/**
*dlistint_len-return the number of elemensts in a doubly linked list
*@h:a doubly linked list to be printed
*Return: the number of nodes or elements in the doubly linked list
**/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n = n + 1;
	}
	return (n);
}
/**
*insert_dnodeint_at_index-function that inserts a new node at an index
*@h:a doubly linked list
*@idx:index of the list where the new node should be added starting from 0
*@n:new node data
*Return:the address of the new node or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, count;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp;

	count = dlistint_len(*h);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	else if (idx < count)
	{
		tmp = *h;
		while (i < idx - 1 && tmp->next != NULL)
		{
			tmp = tmp->next;
			i = i + 1;
		}
		if (tmp)
		{
			if (tmp->next)
				tmp->next->prev = new_node;
			new_node->next = tmp->next;
			new_node->prev = tmp->prev;
			tmp->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
