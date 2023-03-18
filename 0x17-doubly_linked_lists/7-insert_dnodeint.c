#include"lists.h"
/**
*insert_dnodeint_at_index-function that inserts a new node at a given index of Linked list
*@h:a doubly linked list
*@idx:index of the list where the new node should be added starting from 0
*@n:new node data
*Return:the address of the new node or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp;

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
	else
	{
		tmp = *h;
		while (i < idx - 1 && tmp->next != NULL)
		{
			tmp = tmp->next;
			i = i + 1;
		}
		tmp->prev = new_node;
		new_node->next = tmp->next;
		new_node->prev = tmp->prev;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
