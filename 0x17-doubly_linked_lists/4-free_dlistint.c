#include"lists.h"
/**
*free_dlistint-free a distint_t list
*@head:doubly linked list
**/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
