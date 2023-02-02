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
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last->next;
		}
	return (new_node);
}
