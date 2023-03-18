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
	unsigned int i = 0, count = 0;
	dlistint_t *check =malloc(sizeof(dlistint_t));
	dlisting_t *tmp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	check = *h;
	tmp = *h;
	while(check->next != NULL)
	{
		check = check->next;
		count = count + 1;
	}
	if (count == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		return (new_node);
	}
	else
	{
		while (i < idx - 1 && i <= count)
		{
			temp = tmp->next;
			i = i + 1;
		}
		tmp->prev->next = new_node;
		new_node->next = tmp->next;
		new_node->prev = tmp->prev;
		tmp->next->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
