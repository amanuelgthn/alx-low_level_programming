#include"lists.h"
/**
*add_node-adds a new node at the beginning of a list_t list
*@head: a singly linked list
*@str:string to be added to the node
*Return:the address of the new element or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int str_len = strlen(str);
	
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = str_len;
	if ((*head) == NULL)
	{
		new->next = NULL;
		(*head = new);
	}
	else
	{
		new->next = (*head);
		(*head) = new;
	}
	return (new);
}
