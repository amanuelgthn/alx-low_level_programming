#include"lists.h"
/**
*add_nodeint_end-add node at the begining of a singly linked list
*@head:head of a singly linked list
*@n:new node element
*Return:the memory of the new node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *last_node;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)

	{
		last = *head;
		while (last->next != NULL)= *head->next;
	}
	*head = new_node;
	return (new_node);
}
