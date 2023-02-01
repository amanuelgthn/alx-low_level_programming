#include"lists.h"
/**
*listint_len-print all the elements of a list and return number if nodes
*@h:constant singly linked list
*Return:number of nodes
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
