#include"main.h"
/**
*free_dlistint-free a distint_t list
*@head-doubly linked list
**/
void free_dlistint(dlistint_t *head)
{
	free(head);
}