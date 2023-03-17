#include"lists.h"
/**
*get_dnodeint_at_index-function that returns the nth node of a distint_t list
*@head:a doubly linked list
*@index:index of the node starting from 0
*Return:the node of the linked list at the given index
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0, count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node = head;
	while (new_node->next != NULL)
	{
		new_node = new_node->next;
		count = count + 1;
	}
	while (n < index && n <= count)
	{
		head = head->next;
		n = n + 1;
	}
	if (head != NULL && n <= count)
	{
		new->n = head->n;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
