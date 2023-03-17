#include"lists.h"
/**
*add_dnodeint_end-add new node at the end of doubly linked list
*@head:a doubly linked list
*@n:new data to be added
*Return:pointer to the new node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *h;
	
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}	
