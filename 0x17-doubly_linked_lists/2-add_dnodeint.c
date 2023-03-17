#include"lists.h"
/**
*dlistint_len-return the number of elemensts in a doubly linked list
*@h:a doubly linked list to be printed
*Return: the number of nodes or elements in the doubly linked list
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
	free(new);
	return (new);
}
