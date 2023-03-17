#include"lists.h"
/**
*add_dnodeint-function to add node at the front of the Doubly linked list
*@h:a doubly linked list to be updated
*Return: pointer to the new node
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *(head);
	new->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (new);
}
