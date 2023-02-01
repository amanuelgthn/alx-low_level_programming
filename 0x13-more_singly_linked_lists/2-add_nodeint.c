#include"lists.h"
/**
*add_nodeint-add node at the begining of a singly linked list
*@head:head of a singly linked list
*@k:new node element
*Return:the memory of the new node
**/
listint_t *add_nodeint(listint_t **head, const int k)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = k;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
