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
		free(head->len);
		head->str = NULL;
		head->len = NULL;
		head->next = NULL;
	}
}
