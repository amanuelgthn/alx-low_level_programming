#include"lists.h"
/**
*free_dlistint-free a distint_t list
*@head:doubly linked list
**/
void free_dlistint(dlistint_t *head)
{
	while(head->next != NULL)
	{
		head = head->next;
		free(head);
	}
}
