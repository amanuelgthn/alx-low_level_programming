#include"lists.h"
/**
*print_dlistint-print all elemensts in a doubly linked list
*@h:a doubly linked list to be printed
*Return: the number of nodes or elements in the doubly linked list 
**/
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;
	const dlistint_t *ptr = h;
	
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n = n + 1;
	}
	return (n);
}
