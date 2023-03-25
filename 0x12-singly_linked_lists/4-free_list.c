#include"lists.h"
/**
*free_list-free a singly linked list
*@head:doubly linked list
**/
void free_list(list_t *head)
{

	while (head)
	{
		free(head->str);
		head->str = NULL;
		head = head->next;
	}
}
