#include"lists.h"
/**
*free_dlistint-free a distint_t list
*@head:doubly linked list
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = head;
	while(head)
	{
		head = head->next;
		free(freed);
		freed = head;
	}
}
