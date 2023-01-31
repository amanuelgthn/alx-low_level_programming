#include"lists.h"
/**
*listint_len-print all the elements of a list and return number if nodes
*@h:constant singly linked list
*Return:number of nodes
**/
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;
	int count = 0;

	while (current_node)
	{
		current_node = current_node->next;
		count = count + 1;
	}
	return (count);
}
