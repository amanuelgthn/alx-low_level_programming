#include"lists.h"
/**
*add_node_end-adds a new node at the beginning of a list_t list
*@head: a singly linked list
*@str:string to be added to the node
*Return:the address of the new element or NULL if it failed
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *tmp = (*head);
	int str_len = strlen(str);

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head = new);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
