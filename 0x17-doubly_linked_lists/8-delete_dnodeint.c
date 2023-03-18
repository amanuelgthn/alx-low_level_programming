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
	{
	unsigned int i = 0, count;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp;

	count = dlistint_len(*head);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		if (*head)
		{
			new_node->next = *head;
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
	}
	else if (idx < count)
	{
		tmp = *head;
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
	
