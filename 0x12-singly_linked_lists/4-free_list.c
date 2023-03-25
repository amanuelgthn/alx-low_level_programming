#include"lists.h"
/**
*free_list-free a singly linked list
*@head:doubly linked list
**/
void free_list(list_t *head)
{
	list_t *freed = head;

	while (head)
	{
		free(freed);
		freed = head;
		head = head->next;
	}
}
